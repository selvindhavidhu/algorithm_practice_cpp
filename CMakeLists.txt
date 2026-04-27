# algorithm_practice_cpp/CMakeLists.txt (UPDATED)

cmake_minimum_required(VERSION 3.31)
project(AlgorithmsPractice VERSION 1.0)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 1. Use FetchContent to download Google Test and make it available
include(FetchContent)
FetchContent_Declare(
        googletest
        # Pointing to the specific stable 1.17.0 release
        URL https://github.com/google/googletest/releases/download/v1.17.0/googletest-1.17.0.tar.gz
)

# For Windows users: Prevents issues with gtest overriding your compiler settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# --- Source Code Configuration ---
# 1. Find all .cpp files in the 'src/' directory
file(GLOB ALGORITHM_SOURCES "src/*.cpp" "src/leetcode/*.cpp" "src/data-structures/*.cpp")
# Exclude files that have a main() function from the library to prevent multiple-definition errors
list(REMOVE_ITEM ALGORITHM_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/data-structures/stack-problems.cpp")

# 2. Find all .h files in the 'include/' directory
file(GLOB ALGORITHM_HEADERS "include/*.h" "include/leetcode/*.h" "include/data-structures/*.h")

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

# --- Executables ---
# Create a dedicated executable for running the Chapter 3 stack problems
add_executable(stack_exercises src/data-structures/stack-problems.cpp)
target_link_libraries(stack_exercises PRIVATE algorithms)


# --- Unit Testing Configuration ---
# Find all .cpp files in the 'test/' directory and store them in a variable
file(GLOB TEST_SOURCES "test/*.cpp" "test/leetcode/*.cpp")

# 2. Define the test executable
# Use the variable containing all test source files
add_executable(all_unit_tests
        ${TEST_SOURCES}
)

# 3. Link the test executable to our algorithms library and the GTest targets
target_link_libraries(all_unit_tests
        PRIVATE
        algorithms
        GTest::gmock
        GTest::gtest_main
)

# Enable testing
include(CTest)
add_test(NAME AllUnitTests COMMAND all_unit_tests)