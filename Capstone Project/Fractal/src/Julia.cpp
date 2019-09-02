#include <complex>
#include <fstream>
#include <iostream>
#include <math.h>


class Julia {
  private:
    int _width, _height;
    float _c_real, _c_imaginary;
    int _color;

    int _pixel_value(float x, float y) {
      float zx = (3.0 * (x / _width)) - 1.5;
      float zy = (2.0 * (y / _height)) - 1.0;
      std::complex<float> z(zx, zy);
      std::complex<float> c(_c_real, _c_imaginary);
      int iter = 0;

      while (abs(z) < 2 && iter <= 128) {
        z = z * z + c;
        iter++;
      }

      if (iter < 128) {
        return (16 * iter) / 8;
      } 
      else {
        return 0;
      }
    }

  public:
    // Constructor
   Julia(int width, int height, float c_real, float c_imaginary, int color) {
     _width = width;
     _height = height;
     _c_real = c_real;
     _c_imaginary = c_imaginary;
     _color = color;
    }

    void create_image() {
      std::ofstream image("fractal.ppm");

      if (image.is_open()) {
        image << "P3\n" << this->_width << " " << this->_height << " 255\n";

        switch (_color) {
          // Red
          case 1:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << val << ' ' << 0 << ' ' << 0 << "\n";
              }
            }
          // Green
          case 2:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 0 << ' ' << val << ' ' << 0 << "\n";
              }
            }
          // Blue
          case 3:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 0 << ' ' << 0 << ' ' << val << "\n";
              }
            }
          // Purple
          case 4:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << val << ' ' << 0 << ' ' << val << "\n";
              }
            }
          // Yellow
          case 5:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << val << ' ' << val << ' ' << 0 << "\n";
              }
            }
          // Black and White
          case 6:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 256 - val << ' ' << 256 - val 
                      << ' ' << 256 - val << "\n";
              }
            }
        }

        image.close();
      } 
      else {
        std::cout << "Could not open the file";
      }
    }
};
