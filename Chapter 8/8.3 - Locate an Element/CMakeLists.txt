cmake_minimum_required(VERSION 3.0.0)
project(find_and_search VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES compare.h main.cpp compare.cpp)
add_executable(find_and_search ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
