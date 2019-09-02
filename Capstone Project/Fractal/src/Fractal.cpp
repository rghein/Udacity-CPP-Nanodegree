#include <fstream>
#include <iostream>

class Fractal {
  protected:
    int _width;
    int _height;
    int _color;

    int _pixel_value(float x, float y);

  public:
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
                image << 128 + (val / 2) << ' ' << 0 << ' ' << 0 << "\n";
              }
            }
          // Green
          case 2:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 0 << ' ' << 128 + (val / 2) << ' ' << 0 << "\n";
              }
            }
          // Blue
          case 3:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 0 << ' ' << 0 << ' ' << 128 + (val / 2) << "\n";
              }
            }
          // Purple
          case 4:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 128 + (val / 2) << ' ' << 0 << ' ' << 128 + (val / 2)
                      << "\n";
              }
            }
          // Yellow
          case 5:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 128 + (val / 2) << ' ' << 128 + (val / 2) << ' ' << 0
                      << "\n";
              }
            }
          // Black and White
          case 6:
            for (int i = 0; i < this->_width; i++) {
              for (int j = 0; j < this->_height; j++) {
                int val = this->_pixel_value((float)i, (float)j);
                image << 256 - val << ' ' << 256 - val << ' ' << 256 - val
                      << "\n";
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
