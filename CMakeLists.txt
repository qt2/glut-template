cmake_minimum_required(VERSION 3.20)
project(sample LANGUAGES CXX)

add_executable(sample main.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

target_link_libraries(sample ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
