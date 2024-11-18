cmake_minimum_required(VERSION 3.29)
project(Challenge)

set(CMAKE_CXX_STANDARD 20)

# Include directories for headers
include_directories(${CMAKE_SOURCE_DIR})

# Main executable
add_executable(Challenge
        main.cpp
        QuestionSystem.cpp
        QuestionSystem.h
        InputHandler.cpp
        InputHandler.h
)

# GoogleTest setup
# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# Build GoogleTest
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add the test executable
add_executable(ChallengeTests
        tests/basicTests.cpp
        QuestionSystem.cpp
        QuestionSystem.h
)

# Link GoogleTest libraries to the test executable
target_link_libraries(ChallengeTests
        GTest::gtest_main
)

# Add the test to CTest
include(GoogleTest)
gtest_discover_tests(ChallengeTests)
