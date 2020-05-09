set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#===============================================================================
# Source files
#===============================================================================
set(SRC_DIR ${CMAKE_CURRENT_LIST_DIR})
include_directories(${SRC_DIR})

set(SRC_MATH_DIR "${SRC_DIR}/math")
set(SRC_MATH_FILES
	${SRC_MATH_DIR}/add.cpp
	${SRC_MATH_DIR}/multiply.cpp
)

#===============================================================================
# Static libraries and executables
#===============================================================================
add_library("mathlib" ${SRC_MATH_FILES})

add_executable("mybin" ${SRC_DIR}/main.cpp)

target_link_libraries("mybin" PRIVATE "mathlib")
