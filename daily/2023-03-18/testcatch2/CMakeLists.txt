# cmake_minimum_required(VERSION 3.18) ubuntu 没有这么高版本
cmake_minimum_required(VERSION 3.16)

project(catch2test)

# CMAKE_PREFIX_PATH(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/Catch2)
# set(CMAKE_PREFIX_PATH /mnt/d/code/2workspace/all/depends)
find_package(Catch2 CONFIG REQUIRED)
# include_directories(/mnt/d/code/2workspace/all/depends/include/catch2)

include(CTest)
include(Catch)

add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

catch_discover_tests(tests)