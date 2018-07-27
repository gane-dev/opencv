#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
int main(int argc, char const *argv[])
{
    namedWindow("Display Video",WINDOW_AUTOSIZE);
    VideoCapture vid;
    vid.open(string(argv[1]));
    Mat frame;
    for(;;)
    {
        vid >> frame;
        if (frame.empty()) break;
        imshow("Display Video",frame);
        if( (char) cv::waitKey(33) >= 0 ) break;
    }
    return 0;
}
