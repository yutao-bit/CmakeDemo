cmake_minimum_required(VERSION 3.5)

project(LeetcodeDemo)

include_directories(./include)
set(HEADER_FILES ${PROJECT_SOURCE_DIR}/include/solution.h)

aux_source_directory(${PROJECT_SOURCE_DIR} DIR_SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src DIR_SRCS)

add_executable(Test ${DIR_SRCS} ${HEADER_FILES})