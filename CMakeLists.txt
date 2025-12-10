# algorithm_practice_cpp/CMakeLists.txt (UPDATED)

cmake_minimum_required(VERSION 3.31)
project(AlgorithmsPractice VERSION 1.0)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 1. Use FetchContent to download Google Test and make it available
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# Note: Use a specific, stable release tag (e.g., release-1.14.0)
FetchContent_MakeAvailable(googletest)


# --- Source Code Configuration ---
# 1. Find all .cpp files in the 'src/' directory
file(GLOB ALGORITHM_SOURCES "src/*.cpp")

# 2. Find all .h files in the 'include/' directory
file(GLOB ALGORITHM_HEADERS "include/*.h")

include(compiler_flags.cmake)

# Define the source library (where our algorithms live)
# We combine the lists of source files and header files here.
add_library(algorithms
        ${ALGORITHM_SOURCES}
        ${ALGORITHM_HEADERS}
)

target_include_directories(algorithms
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# --- Unit Testing Configuration ---
# Find all .cpp files in the 'test/' directory and store them in a variable
file(GLOB TEST_SOURCES "test/*.cpp")

# 2. Define the test executable
# Use the variable containing all test source files
add_executable(all_unit_tests
        ${TEST_SOURCES}
)

# 3. Link the test executable to our algorithms library and the GTest targets
target_link_libraries(all_unit_tests
        PRIVATE
        algorithms
        gtest_main
)

# Enable testing
include(CTest)
add_test(NAME AllUnitTests COMMAND all_unit_tests)