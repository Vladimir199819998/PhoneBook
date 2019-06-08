cmake_minimum_required(VERSION 3.13)
project(NewPhoneBook)

set(CMAKE_CXX_S1TANDARD 14)
#include_directories("include" "src")
add_executable(NewPhoneBook main.cpp include/human.h include/humandata.h src/humandata.cpp src/human.cpp)