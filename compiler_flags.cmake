if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    # Basic flags suitable for LeetCode practice
    set(CMAKE_CXX_FLAGS "-std=c++20 -pthread -Wall -Wextra")
    set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # Basic flags suitable for LeetCode practice
    set(CMAKE_CXX_FLAGS "-std=c++20 -pthread -Wall -Wextra")
    set(CMAKE_CXX_FLAGS_DEBUG "-g -Og")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    # Basic flags suitable for LeetCode practice
    set(CMAKE_CXX_FLAGS "/EHsc /W3 /ZI /MP")
    set(CMAKE_CXX_FLAGS_DEBUG "/MDd /Od /RTC1")
    set(CMAKE_CXX_FLAGS_RELEASE "/GL /MD /O2 /Oi")
else()
    message(FATAL_ERROR "${CMAKE_CXX_COMPILER_ID} is not recognized.")
endif()