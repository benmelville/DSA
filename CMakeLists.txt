cmake_minimum_required(VERSION 3.23)
project(dsa)

set(CMAKE_CXX_STANDARD 20)

# Set the source and include directories
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)

# Include directories
include_directories(${INCLUDE_DIR})

# List your source files explicitly
set(SOURCE_FILES
        ${SOURCE_DIR}/main.cpp
        ${SOURCE_DIR}/SinglyLinkedList.cpp
        ${SOURCE_DIR}/DoublyLinkedList.cpp
        # Add more source files as needed
        )

# Add the executable and specify source files
add_executable(dsa ${SOURCE_FILES})