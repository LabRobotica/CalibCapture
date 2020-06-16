
cmake_minimum_required(VERSION 2.8)
project( CalibCapture )
find_package( OpenCV REQUIRED )
add_executable( calibcapture calibcapture.cpp )
target_link_libraries( calibcapture ${OpenCV_LIBS} )

SET(OpenCV_DIR /usr/lib/cmake/opencv4/)
