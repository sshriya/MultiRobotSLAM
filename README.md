# MultiRobotSLAM
Computer Vision project on Multi Robot 3D reconstruction and SLAM

## OpenCV-3.1.0 installation - MAC OSX Yosemite

1. Install Homebrew and ant
brew install ant

2. Install CMake
http://www.cmake.org/download/ 

3. You will also need to add cMake to the path: sudo mkdir -p /usr/local/bin               
sudo /Applications/CMake.app/Contents/bin/cmake-gui --install=/usr/local/bin

Once this is done, cmake --version will show the version of cMAke. 

3. Download openCV and unzip in a location of choice
http://opencv.org/downloads.html

4. cd to the openCV directory and create a new folder named build: 
mkdir build

5. Prepare for installation
cmake -G "Unix Makefiles" ..

6. Make all the libraries
 make -j8

7. Finish up the installation
sudo make install

OpenCV is now installated. In the build/lib directory you will have all the dylib files. 

## Setting up xcode for OpenCV
1. Start by creating a new C++ project
New - Project - C++

2. In the project folder go to build settings and search for "search paths". Make Always search user path - YES.

3. Framework Search Path : /usr/local/bin

4. Header Search Path: /usr/local/include

5. Library Search Path: This is the place where you have installed the opencv/build/lib:
 /Users/shriyashah/Documents/opencv-2.4.13/build/lib

6. Now, add files to the project folder. We need to add the libraries that we will use. I added the following:
libopencv_core.2.4.13.dylib, imgproc, highgui. 

7. Now, start writing the openCV programs. 
