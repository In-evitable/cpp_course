cmake_minimum_required(VERSION 3.0.0)
project(persname VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES persname.h persname.cpp pntest.cpp)
add_executable(persname ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
