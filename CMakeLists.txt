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

# Enable Python support
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)

# Install the Python script
install(
  FILES "${CMAKE_CURRENT_SOURCE_DIR}/python_with_cmake_test/py_with_cmake.py"
  DESTINATION bin
  PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
              GROUP_EXECUTE GROUP_READ
              WORLD_EXECUTE WORLD_READ
)

# Create a custom target to build C++ and run Python
add_custom_target(build_and_run_all
  COMMAND ${CMAKE_COMMAND} --build "${CMAKE_BINARY_DIR}"  # Build C++
  COMMAND ${Python3_EXECUTABLE} py_with_cmake.py  # Run Python
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  DEPENDS my_cpp_app
)