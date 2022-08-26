list(APPEND tests
  clz/v128-u8
  clz/v128-u16
  clz/v128-u32
  cnt/v128-u8
  cnt/v128-u16
  cnt/v128-u32
  ctz/v128-u8
  ctz/v128-u16
  ctz/v128-u32
  not/v128-u8
  not/v128-u16
  not/v128-u32
)

foreach(test IN LISTS tests)
  string(REPLACE "/" "_" name ${test})

  add_executable(test_${name} ${test}.c)

  target_link_libraries(test_${name} simd_static)

  add_test(
    NAME ${name}
    COMMAND test_${name}
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  )
endforeach()
