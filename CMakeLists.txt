cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(newgroundin-gamebrowser VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
    src/htmlHelper.hpp
    src/htmlHelper.cpp
 )

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
    message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

# Add Geode SDK
add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

# Link Geode SDK
setup_geode_mod(${PROJECT_NAME})
