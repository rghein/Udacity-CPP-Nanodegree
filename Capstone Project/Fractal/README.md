# C++ Nanodegree: Fractal Project

## Dependencies for Running Locally

* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* OpenCV >= 3.2
  * The OpenCV 4.1.0 source code can be found [here](https://github.com/opencv/opencv/tree/4.1.0)
  * Linux installation [here](https://docs.opencv.org/2.4/doc/tutorials/introduction/linux_install/linux_install.html)
  * Mac installation [here](https://docs.opencv.org/2.4/doc/tutorials/introduction/ios_install/ios_install.html)
  * Windows installation [here](https://docs.opencv.org/2.4/doc/tutorials/introduction/windows_install/windows_install.html)
  * A good installation reference for multiple platforms [here](https:www.learnopencv.com/opencv-installation-on-ubuntu-macos-windows-and-raspberry-pi/)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./fractal`.

## Project Description

This project will create images of fractals based on user input.  
User input is obtained via the terminal/console.  
Images are displayed making use of the openCV library.  

The project structure starts in the main function.  
The main function initially calls FractalInfo.cpp  
to give an overview to the user of what the program does.  
It then calls UserInput.cpp to solicit input from the user.  
Based on user input, UserInput.cpp will call on either  
Mandelbrot.cpp or Julia.cpp to create the image  
that has been chosen by the user.  Then, main.cpp will  
give the user the option to create another image.

## Rubric Points Addressed

1. The project demonstrates an understanding of C++  
   functions and control structures.  

    * while loops:  
      1. main.cpp: lines 16 and 36  
      2. UserInput.cpp: lines 15, 42, 96, 130, 158  
      3. Julia.cpp: line 20  
      4. Mandelbrot.cpp: line 19 

    * if/else statements
      1. main.cpp: lines 43 and 48
      2. UserInput.cpp: lines 26, 27, 38, 60, 61, 113, 114, 146
      3. Julia.cpp: lines 25 and 46
      4. Mandelbrot.cpp: lines 24 and 43

    * switch statements
      1. Julia.cpp: line 49
      2. Mandelbrot.cpp: line 46  

    * functions
      1. Julia.cpp: lines 13 and 43
      2. Mandelbrot.cpp: lines 12 and 40


2. The project reads data from a file and process the  
   data, or the program writes data to a file.  

    * Writing to file:
      1. Julia.cpp: line 43 
      2. Mandelbrot.cpp: line 40


3. The project accepts user input and processes the input.  

    * Accept User Input:  
      1. main.cpp:  line 43
      2. UserInput.cpp: lines 26, 60, 113, 146, 168



4. The project code is organized into classes with class  
   attributes to hold the data, and class methods to perform  
   tasks.

     * Other than main.cpp, all files are organized as classes


5. All class data members are explicitly specified as public,  
   protected, or private.

     * In all classes every data member and function is specified
       as public or private.