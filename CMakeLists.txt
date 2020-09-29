cmake_minimum_required(VERSION 3.17)
project(GerberRS274XParser)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11")
set(BISON_EXECUTABLE "D:/cygwin64/bin/bison.exe")
set(FLEX_EXECUTABLE "D:/cygwin64/bin/flex.exe")
add_definitions(-D YY_NO_UNISTD_H)
set(CXX_STANDARD cxx_std_11)
set(CXX_STANDARD_REQUIRED ON)
# Generate a compilation database for YCM
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${GerberRS274XParser_SOURCE_DIR}/include)
include_directories(${CMAKE_BINARY_DIR}/src)

add_subdirectory(src)
