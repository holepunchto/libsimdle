list(APPEND tests
  allo/v128
  allz/v128
  and/v128-u8
  and/v128-u16
  and/v128-u32
  clear/v128-u8
  clear/v128-u16
  clear/v128-u32
  clo/v128-u8
  clo/v128-u16
  clo/v128-u32
  clz/v128-u8
  clz/v128-u16
  clz/v128-u32
  cnt/v128-u8
  cnt/v128-u16
  cnt/v128-u32
  cto/v128-u8
  cto/v128-u16
  cto/v128-u32
  ctz/v128-u8
  ctz/v128-u16
  ctz/v128-u32
  load/v128-u8
  load/v128-u16
  load/v128-u32
  not/v128-u8
  not/v128-u16
  not/v128-u32
  or/v128-u8
  or/v128-u16
  or/v128-u32
  sum/v128-u8
  sum/v128-u16
  sum/v128-u32
  xor/v128-u8
  xor/v128-u16
  xor/v128-u32
)

foreach(test IN LISTS tests)
  string(REPLACE "/" "_" name ${test})

  add_executable(${name} ${test}.c)

  target_link_libraries(
    ${name}
    PRIVATE
      simdle_static
  )

  add_test(
    NAME ${name}
    COMMAND ${name}
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  )

  set_tests_properties(
    ${name}
    PROPERTIES
    TIMEOUT 30
  )
endforeach()
