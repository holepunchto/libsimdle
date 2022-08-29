cmake_minimum_required(VERSION 3.22)

project(simd C)

add_library(simd OBJECT)

set_target_properties(
  simd
  PROPERTIES
  C_STANDARD 99
  POSITION_INDEPENDENT_CODE 1
)

target_sources(
  simd
  INTERFACE
    include/simd.h
  PRIVATE
    src/clo.c
    src/clz.c
    src/cnt.c
    src/ctz.c
    src/cto.c
    src/load.c
    src/not.c
)

target_include_directories(
  simd
  PUBLIC
    include
)

add_library(simd_shared SHARED $<TARGET_OBJECTS:simd>)

set_target_properties(
  simd_shared
  PROPERTIES
  OUTPUT_NAME simd
)

add_library(simd_static STATIC $<TARGET_OBJECTS:simd>)

set_target_properties(
  simd_static
  PROPERTIES
  OUTPUT_NAME simd
)

install(TARGETS simd_shared simd_static)

install(FILES include/simd.h DESTINATION include)

enable_testing()

add_subdirectory(test)
