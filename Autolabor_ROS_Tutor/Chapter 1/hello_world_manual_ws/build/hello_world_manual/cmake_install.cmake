# Install script for directory: /home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 1/hello_world_manual_ws/src/hello_world_manual

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 1/hello_world_manual_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 1/hello_world_manual_ws/build/hello_world_manual/catkin_generated/installspace/hello_world_manual.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hello_world_manual/cmake" TYPE FILE FILES
    "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 1/hello_world_manual_ws/build/hello_world_manual/catkin_generated/installspace/hello_world_manualConfig.cmake"
    "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 1/hello_world_manual_ws/build/hello_world_manual/catkin_generated/installspace/hello_world_manualConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hello_world_manual" TYPE FILE FILES "/home/parallels/Projects/ROS_tutorial/Autolabor_ROS_Tutor/Chapter 1/hello_world_manual_ws/src/hello_world_manual/package.xml")
endif()

