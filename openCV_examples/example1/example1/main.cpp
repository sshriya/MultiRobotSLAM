//
//  main.cpp
//  example1
//
//  Created by Shriya Shah on 9/14/16.
//  Copyright © 2016 Shriya Shah. All rights reserved.
//

#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    VideoCapture cap(0);
    while(true){
        Mat Webcam;
        cap.read(Webcam);
        imshow("Webcam", Webcam);
    }
    //return 0;
}
