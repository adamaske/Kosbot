cmake_minimum_required(VERSION 3.15)
project(Kosbot VERSION 1.0)


set(${CMAKE_RUNTIME_OUTPUT_DIRECTORY} ${PROJECT_BINARY_DIR})
set(${CMAKE_ARCHIVE_OUTPUT_DIRECTORY} ${PROJECT_BINARY_DIR})
set(${CMAKE_LIBRARY_OUTPUT_DIRECTORY} ${PROJECT_BINARY_DIR})

configure_file(Config.h.in ${CMAKE_SOURCE_DIR}/include/Config.h)



add_executable(Kosbot 
	src/main.cpp 
	dependencies/fundament/src/glad.c
	src/Robot.cpp
 "include/RobotControlPanel.h" "src/RobotControlPanel.cpp")

target_include_directories(Kosbot PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(dependencies/fundament/deps)
add_subdirectory(dependencies/fundament/vendor)

target_link_libraries(Kosbot PUBLIC deps vendor)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED True)
