cmake_minimum_required(VERSION 3.20.0)
project(ubzjx)
set(cmake_cxx_standard 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
aux_source_directory(. SRC_LIST)
add_executable(ubzjx ${SRC_LIST})