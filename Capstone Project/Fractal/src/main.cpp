#include <fstream>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "UserInput.cpp"
#include "FractalInfo.cpp"

int main() {
  bool try_again = true;
  int choice;

  FractalInfo frac_info;
  frac_info.fractal_info();

  while (try_again) {

    // Get information from user 
    UserInput user_input;
    user_input.get_input();

    // Use opencv to display image
    cv::Mat image;
    cv::Size size(512, 512);
    image = cv::imread("fractal.ppm", CV_LOAD_IMAGE_COLOR);  // Read the file
    cv::resize(image, image, size);  // Make size of image smaller
    cv::namedWindow("Fractal Display", CV_WINDOW_NORMAL);  // Create a window for display.
    cv::moveWindow("Fractal Display", 400, 100);
    cv::imshow("Fractal Display", image);  // Show image inside window.
    cv::waitKey(-1);  // Wait for a keystroke in the window
    cv::destroyWindow("Fractal Display");

    // Determine if user would like to make another image
    bool choice_made = false;

    while (!choice_made) {
      std::cout << std::string(5, '\n');
      std::cout << "   Would you like to make another image?\n"
                << "   1. Yes or 2. No\n"
                << "   Enter 1 or 2\n\n";
      std::cin >> choice;

      if (std::cin.fail() || (choice != 1 && choice != 2)) {
        std::cout << "   Only 1 or 2 will be accepted as input\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
      }
      else {
        if (choice == 1) {
          try_again = true;
          choice_made = true;
        }
        else {
          try_again = false;
          choice_made = true;
        }
      }
    }
  }

  return 0;
}
