cmake_minimum_required(VERSION 3.20)
project(LB1_26 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp)
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Student")
install(TARGETS main DESTINATION bin)
include(CPack)