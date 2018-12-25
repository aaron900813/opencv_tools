CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )

PROJECT(opencv_tools)

FIND_PACKAGE( OpenCV REQUIRED )

INCLUDE_DIRECTORIES()
ADD_EXECUTABLE(calibration.exe calibration.cpp)
TARGET_LINK_LIBRARIES(calibration.exe ${OpenCV_LIBS} )

ADD_EXECUTABLE(imglist_creator.exe imglist_creator.cpp)
TARGET_LINK_LIBRARIES(imglist_creator.exe ${OpenCV_LIBS} )

ADD_EXECUTABLE(calibration_pic.exe calibration_pic.cpp)
TARGET_LINK_LIBRARIES(calibration_pic.exe ${OpenCV_LIBS} )