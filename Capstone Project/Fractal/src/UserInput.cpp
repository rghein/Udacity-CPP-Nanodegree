#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include "Julia.cpp"
#include "Mandelbrot.cpp"

class UserInput {
  public:
    void get_input() {

      int fractal_type;
      bool continue_loop = true;

      while (continue_loop) {
        std::cout
            << "\n\n\n";

        std::cout << "   This program will create a fractal image and\n"
                  << "   display that image\n\n"
                  << "   Which type of fractal image would you prefer to see?\n"
                  << "      1. Mandelbrot Set\n"
                  << "      2. Julia Set\n\n"
                  << "   Please enter your choice: 1 or 2\n\n";

        if (std::cin >> fractal_type) {
          if (fractal_type == 1 || fractal_type == 2) {
            continue_loop = false;
          }
        }
        else {
          std::cout << "   Only 1 or 2 will be accepted as input\n";
          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }
      }

      // Mandelbrot Set
      if (fractal_type == 1) {
        int color;
        continue_loop = true;

        while (continue_loop) {

          std::cin.clear();
          std::cin.ignore(80, '\n');

          std::cout
              << "\n\n\n";

          std::cout << "   You can choose the color of your image.\n\n"
                    << "   Which color would you like?\n"
                    << "      1. Red\n"
                    << "      2. Green\n"
                    << "      3. Blue\n"
                    << "      4. Purple\n"
                    << "      5. Yellow\n"
                    << "      6. Black And White\n"
                    << "   Please enter your choice: 1 through 6.\n\n";

          if (std::cin >> color) {
            if (color < 1 || color > 6) {
              std::cout << "   Only 1 or 2 will be accepted as input\n";
              std::this_thread::sleep_for(std::chrono::milliseconds(1500));
            }
            else {
              continue_loop = false;
            }
          }
          else {
            std::cout << "   Only 1 or 2 will be accepted as input\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
          }
        }

        std::cout
            << "\n\n\n";

        std::cout << "   It will take a short time to generate the image.\n\n"
                  << "   The image will then display in a window on your screen.\n"
                  << "   When you are finished viewing the image, close the\n"
                  << "   window by hitting any key on your keyboard.\n\n";

        // Create instance of Mandelbrot object
        Mandelbrot mandelbrot(1024, 1024, color);
        // Create the image to display
        mandelbrot.create_image();
      }

      // Julia Set
      else {
        int color;
        float real;
        float imaginary;
        continue_loop = true;

        while (continue_loop) {
          std::cin.clear();
          std::cin.ignore(80, '\n');

          std::cout
              << "\n\n\n";

          std::cout << "   You can choose the color of your image.\n\n"
                    << "   Which color would you like?\n"
                    << "      1. Red\n"
                    << "      2. Green\n"
                    << "      3. Blue\n"
                    << "      4. Purple\n"
                    << "      5. Yellow\n"
                    << "      6. Black And White\n"
                    << "   Please enter your choice: 1 through 6.\n\n";

          if (std::cin >> color) {
            if (color < 1 || color > 6) {
              std::cout << "   Only 1 through 6 will be accepted as input\n";
              std::this_thread::sleep_for(std::chrono::milliseconds(1500));
            } 
            else {
              continue_loop = false;
            }
          } 
          else {
            std::cout << "   Only 1 through 6 will be accepted as input\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
          }
        }

        continue_loop = true;

        while (continue_loop) {
          std::cin.clear();
          std::cin.ignore(80, '\n');

          std::cout
              << "\n\n\n";

          std::cout << "   You can also choose the number to enter as the\n"
                    << "   constant.  You will be given the option of entering it as\n"
                    << "   a complex number.  You will first be asked to enter\n"
                    << "   the real part of the complex number, then you will be\n"
                    << "   asked to enter the imaginary part of the complex number\n\n"
                    << "   What is your choice for the real part of the complex number?\n"
                    << "   Please enter your choice.  Enter a real number, for\n"
                    << "   example: 1, 0.5, -0.623, 1.635\n\n";

          if (std::cin >> real) {
            continue_loop = false;
          }
          else {
            std::cout << "\n\n   Please enter a real number, for example:  \n"
                      << "   1, 0.5, -0.623, 1.635\n\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
          }
        }

        continue_loop = true;

        while (continue_loop) {
          std::cin.clear();
          std::cin.ignore(80, '\n');

          std::cout
              << "\n\n\n";

          std::cout << "   What is your choice for the imaginary part of the complex number\n"
                    << "   Please enter your choice (enter a real number)\n\n";

          if (std::cin >> imaginary) {
            continue_loop = false;
          } 
          else {
            std::cout << "\n\n   Please enter a real number, for example:  \n"
                      << "   1, 0.5, -0.623, 1.635\n\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
          }
        }

        std::cout
            << "\n\n\n";

        std::cout
            << "   It will take a few seconds to generate the image.\n\n"
            << "   The image will then display in a window on your screen.\n"
            << "   When you are finished viewing the image, close the\n"
            << "   window by hitting any key on your keyboard.\n\n";

        // Create instance of Julia object
        Julia julia(1024, 1024, real, imaginary, color);
        // Create the image to display
        julia.create_image();
      }
    }
};