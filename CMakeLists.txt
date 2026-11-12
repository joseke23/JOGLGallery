cmake_minimum_required(VERSION 3.23)

project(JOGLGallery)


add_executable(main
    src/main.cpp
    src/glad.c
)

target_link_libraries(main PRIVATE glfw)

target_include_directories(main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external
)