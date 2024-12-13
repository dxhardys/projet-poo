cmake_minimum_required(VERSION 3.10)

project(TP_POO)

set(CMAKE_CXX_STANDARD 17)


add_executable(Main.exe main.cpp src/Problem.cpp src/Equation.cpp src/UniformMesh.cpp src/Variable.cpp src/Upwind.cpp src/Timer.cpp)


enable_testing()


#add_test(structure_test simulation)
#add_test(UnitaryTest tests)

# GTest
find_package(GTest REQUIRED)
#include_directories(${GTEST_INCLUDE_DIRS})
#add_executable(tests UnitaryTest.cpp Equation.cpp Problem.cpp UniformMesh.cpp main.cpp Variable.cpp Upwind.cpp Timer.cpp)
#target_link_libraries(tests ${GTEST_LIBRARIES} pthread)


#gtest_discover_tests(tests)

find_package(Threads)
target_link_libraries(Main.exe Threads::Threads)


