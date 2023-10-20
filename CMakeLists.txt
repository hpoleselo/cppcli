cmake_minimum_required(VERSION 3.13.4)

project(cppcli)

# Add package 1
add_subdirectory(kg2lb)

# Add package 2
add_subdirectory(lb2kg)

# The executable will be the project name
#add_executable(${PROJECT_NAME} main.cpp)

# Specifies installation path for each package
# the executable after TARGETS needs to be the same as the executable
# defined in each package's CMakeLists.txt
install(TARGETS kg2lb DESTINATION bin)
install(TARGETS lb2kg DESTINATION bin)