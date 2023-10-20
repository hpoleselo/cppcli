cmake_minimum_required(VERSION 3.13.4)

project(cppcli)

# The executable will be the project name
add_executable(${PROJECT_NAME} main.cpp)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)