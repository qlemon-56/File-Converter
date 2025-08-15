#include <iostream>

#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace std;
using namespace cv;


int main() {

    std::string inputPath = samples::findFile("JLR Logo Header.png");
    Mat img = imread(inputPath, IMREAD_COLOR);

    if (img.empty())
    {
        std::cout << "Could not read the image" << std::endl;
        return 1;
    } 

    imshow("Display window", img);

    int k = waitKey(0);

    if (k == 's')
    {
        imwrite("output.jpg", img);
    }
    

    return 0;
}   