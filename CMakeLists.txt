cmake_minimum_required (VERSION 3.24)
project(numpymatrix)
add_definitions(-std=c++17)

set(CMAKE_BUILD_TYPE Debug)

# install eigen via conan
if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

find_package (Eigen3 3.3 REQUIRED)

# set manually the armadillo paths and libs (the conan recipe appears broken)
set(ARMA_PREFIX "/usr")
set(ARMA_LIB_DIR "${ARMA_PREFIX}/lib/x86_64-linux-gnu")
set(ARMA_LIBS "${ARMA_LIB_DIR}/libarmadillo.so")

include_directories(${EIGEN_INCLUDE_DIRS})

set(TARGET2_SOURCES src/eigen.cpp)
set(TARGET1_SOURCES src/arma.cpp)

add_executable(eigen ${TARGET2_SOURCES})
target_link_libraries (eigen Eigen3::Eigen)

add_executable(arma ${TARGET1_SOURCES})
target_link_libraries(arma "${ARMA_LIBS}")