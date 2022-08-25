cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)

project(cxx_cmake CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(corrosion)
include(cmake/corrosion_cxx.cmake)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PRIVATE
  src/main.cpp
)

add_library_rust(PATH src/cxxbridge_code NAMESPACE my)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
  my::cxxbridge_code
)
