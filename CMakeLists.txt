cmake_minimum_required(VERSION 3.15)
project(Kosbot VERSION 1.0)

add_subdirectory(vendor/Fundamentum)

target_link_libraries(Kosbot PRIVATE Fundamentum)


