cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(sample1
  ${CMAKE_SOURCE_DIR}/src/main.c
  ${CMAKE_SOURCE_DIR}/src/copy.c
  ${CMAKE_SOURCE_DIR}/test/unit/copy_test.cpp
)


target_link_libraries(
  sample1
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sample1)

add_test(NAME Test COMMAND sample1)
