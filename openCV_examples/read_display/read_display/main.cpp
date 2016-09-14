//
//  main.cpp
//  read_display
//
//  Created by Shriya Shah on 9/14/16.
//  This program reads an image and then displays it on a new window.
//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
    if( argc != 2)
    {
        cout <<" Usage: display_image ImageToLoadAndDisplay" << endl;
        //return -1;
    }
    
    Mat image;
    //image = imread(argv[1], CV_LOAD_IMAGE_COLOR);   // Read the file
    image = imread("/Users/shriyashah/Desktop/lena.jpg");
    
    if(! image.data )                              // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        //return -1;
    }
    
    namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display window", image );                   // Show our image inside it.
    
    waitKey(0);                                          // Wait for a keystroke in the window
    return 0;
}

