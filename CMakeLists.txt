cmake_minimum_required(VERSION 3.30)
project(modules_partition)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

add_library(modules_partition SHARED
        dll_main.cpp)

add_subdirectory(src)

include(GenerateExportHeader)
generate_export_header(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
        PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
        ${CMAKE_CURRENT_BINARY_DIR}
        FILES
        ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_export.h
)

target_compile_options(${PROJECT_NAME} PRIVATE
        /experimental:module
        /std:c++latest
        /Z7
)