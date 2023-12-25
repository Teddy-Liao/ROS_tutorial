# Install script for directory: /home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 2/pub_sub_ws/src/pub_sub_pkg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 2/pub_sub_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 2/pub_sub_ws/build/pub_sub_pkg/catkin_generated/installspace/pub_sub_pkg.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pub_sub_pkg/cmake" TYPE FILE FILES
    "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 2/pub_sub_ws/build/pub_sub_pkg/catkin_generated/installspace/pub_sub_pkgConfig.cmake"
    "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 2/pub_sub_ws/build/pub_sub_pkg/catkin_generated/installspace/pub_sub_pkgConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pub_sub_pkg" TYPE FILE FILES "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 2/pub_sub_ws/src/pub_sub_pkg/package.xml")
endif()

