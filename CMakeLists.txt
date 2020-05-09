cmake_minimum_required (VERSION 3.8)

project ("myproject")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#===============================================================================
# Source files
#===============================================================================
set(SRC_DIR "src")
include_directories(${SRC_DIR})

set(SRC_MATH_DIR "${SRC_DIR}/math")
set(SRC_MATH_FILES
	${SRC_MATH_DIR}/add.cpp
	${SRC_MATH_DIR}/multiply.cpp
)

#===============================================================================
# Static libraries and executables
#===============================================================================
# Static library "mathlib"
add_library("mathlib" STATIC
	${SRC_MATH_FILES}
)

# Executable "mybin"
add_executable("mybin"
	${SRC_DIR}/main.cpp
)
target_link_libraries("mybin"
                      PRIVATE "mathlib")

