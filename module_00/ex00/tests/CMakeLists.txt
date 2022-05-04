cmake_minimum_required(VERSION 3.14)

set(This Ex00Test)
project(${This} C CXX)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(Sources
    ../src/echo.cpp
    Test.cpp
)

add_executable(
    ${This}
    ${Sources}
)

target_link_libraries(
    ${This}
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(${This})
