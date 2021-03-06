#include "geometry.hpp"
#include "utils.hpp"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>
#include <random>


std::vector<cv::Point>
getAllWhitePixels(const cv::Mat& img, int brightnessThreshold);
std::vector<cv::Point>
getPointsOutsideCircle(const std::vector<cv::Point>& in, cv::Point center, int radius);
std::vector<Line>
getSurface(const std::vector<cv::Point>& points);

struct ContactAngleResult {
    // liquid drop circle parameters
    cv::Point center;
    int       radius;
    // surface line
    Line      surface;
    // contact angles
    double    theta1;
    double    theta2;
};

// TODO: make img const ref
// TODO: add mechanism to dispatch intermediate result
//       to visualize calculation process
ContactAngleResult
getContactAngle(cv::Mat& img);
