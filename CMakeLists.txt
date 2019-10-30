cmake_minimum_required(VERSION 3.14)
project(testing_test)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Driller.cpp)
add_executable(Driller_run ${SOURCE_FILES})

include_directories(Driller_lib)
add_subdirectory(Driller_lib)

target_link_libraries(Driller_run Driller_lib)

add_subdirectory(Google_tests)


