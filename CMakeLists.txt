cmake_minimum_required(VERSION 3.5)

project(homeservercommand)

file(GLOB source_files "${PROJECT_SOURCE_DIR}/src/*cpp")

add_executable(commands "${source_files}")
