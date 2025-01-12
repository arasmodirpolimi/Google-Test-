cmake_minimum_required(VERSION 3.10)
project(GoogleTestExample)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(tests test.cpp)

# Link Google Test and pthread
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()

# Add test to CTest
add_test(NAME BankAccountTest COMMAND tests)
