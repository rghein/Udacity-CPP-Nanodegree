#include <iostream>

class FractalInfo {
  public:
    void fractal_info() {
      int int_input;
      bool continue_loop = true;

      std::cout
        << "\n\n\n"
        << "   This program will allow you to display various fractal images. \n"
        << "   The fractal patterns created are representations of the complex\n"
        << "   plane, where the x and y dimensions represent the real and imaginary\n"
        << "   parts of a complex number.  The designs will differentiate which \n"
        << "   points converge, versus which diverge when the following equation is\n"
        << "   iterated over: f(z_n+1) = (z_n) ^ 2 + c, where both z and c are \n"
        << "   complex numbers.  You will be able to choose between two different\n"
        << "   types of fractal images to create, and also choose from a number of\n"
        << "   colors.  For one of the two, you will be able to add additional \n"
        << "   parameters.  The explanation of each follows.";

      std::cout
        << "\n\n   Enter 1 to continue...\n";

      while (continue_loop) {
        if (std::cin >> int_input) {
          if (int_input == 1) {
            std::cout << "\n\n";
            std::cin.clear();
            std::cin.ignore(80, '\n');
            continue_loop = false;
          }
          else {
            std::cout << "   Enter 1 to continue...\n";
          }
        }
        else {
          std::cout << "   Enter 1 to continue...\n";
        }
      }

      continue_loop = true;

      std::cout 
        << "   The first type of fractal pattern is the Mandelbrot set.\n"
        << "   In the Mandelbrot set, z is initially set as the complex number\n"
        << "   0 + 0i, with both the real and imaganary coefficients at zero.\n"
        << "   The display will graph the real and imaginary coefficients for\n"
        << "   the constant c in the iterated equation.  For each point in the\n"
        << "   complex plane the image will differentiate which points diverge\n"
        << "   versus converge for the iteration previously shown.\n";

      std::cout << "\n\n   Enter 1 to continue...\n";

      while (continue_loop) {
        if (std::cin >> int_input) {
          if (int_input == 1) {
            std::cout << "\n\n";
            std::cin.clear();
            std::cin.ignore(80, '\n');
            continue_loop = false;
          } else {
            std::cout << "   Enter 1 to continue...\n";
          }
        } else {
          std::cout << "   Enter 1 to continue...\n";
        }
      }

      continue_loop = true;

      std::cout 
        << "   The second type of fractal pattern is the Julia set. In the Julia\n"
        << "   set, the complex coefficients for z will be the x and y coordinates\n"
        << "   of the image created.  If you choose to display a Julia set, you will\n"
        << "   be asked to choose the real and imaginary coefficients of the constant c.\n"
        << "   The choice you make will change the overall shape and appearance of\n"
        << "   the image created.  Experience has shown that one can find many\n"
        << "   interesting images when choosing coefficients between 1 and -1,\n"
        << "   but you will be free to choose any real number as coefficient.\n"
        << "   (Good choices of coefficients can be found online, for instance,\n"
        << "   https://en.wikipedia.org/wiki/Julia_set)";

      std::cout
        << "\n\n   Enter 1 to continue and create your image...\n";

      while (continue_loop) {
        if (std::cin >> int_input) {
          if (int_input == 1) {
            std::cin.clear();
            std::cin.ignore(80, '\n');
            continue_loop = false;
          } else {
            std::cout << "   Enter 1 to continue...\n";
          }
        } else {
          std::cout << "   Enter 1 to continue...\n";
        }
      }
    }
};