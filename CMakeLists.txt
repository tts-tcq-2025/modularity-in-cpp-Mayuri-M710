cmake_minimum_required(VERSION 3.11)
project(TelCoColorCoder)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include FetchContent module
include(FetchContent)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/ColorPair.cpp
    src/ReferenceManual.cpp
    src/ColorMapper.cpp
)

# Header files
set(HEADERS
    include/ColorPair.h
    include/ColorDefinitions.h
    include/ReferenceManual.h
    include/ColorMapper.h
)

# Create library
add_library(TelCoColorCoderLib ${SOURCES} ${HEADERS})

# Main executable
add_executable(TelCoColorCoder main.cpp)
target_link_libraries(TelCoColorCoder TelCoColorCoderLib)

# Fetch and configure Google Test
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Test executable
add_executable(ColorCoderTests test/ColorCoderTests.cpp)
target_link_libraries(ColorCoderTests TelCoColorCoderLib gtest_main)

# Add test
include(GoogleTest)
gtest_discover_tests(ColorCoderTests)
