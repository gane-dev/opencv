cmake_minimum_required (VERSION 2.6)

project (CVCPP)

find_package( OpenCV REQUIRED )
add_executable( DisplayImage opensample.cpp )
target_link_libraries( DisplayImage ${Ocd penCV_LIBS} )
