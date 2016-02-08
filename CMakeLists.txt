cmake_minimum_required(VERSION 3.0)
project( boom )
add_executable (boom boom.cpp )
target_sources( boom PRIVATE "num_collection.cpp" )
