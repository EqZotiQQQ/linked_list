cmake_minimum_required(VERSION 3.10)

project(linked_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(HEADERS
    headers/linked_list.h
    headers/node.h
)

set(SOURCES
    main.cpp
    src/linked_list.cpp
    src/node.cpp
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/headers
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(linked_list ${SOURCES} ${HEADERS})
