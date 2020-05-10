#===============================================================================
# Source files
#===============================================================================
set(TEST_DIR ${CMAKE_CURRENT_LIST_DIR})
include_directories(${TEST_DIR})

set(TEST_MATH_DIR "${TEST_DIR}/math")
set(TEST_MATH_FILES
	${TEST_MATH_DIR}/add.cpp
	${TEST_MATH_DIR}/multiply.cpp
	)

#===============================================================================
# Static libraries and executables
#===============================================================================
# Executable "test"
add_executable("unit_tests"
	${TEST_DIR}/main.cpp
	${TEST_MATH_FILES}
	)
target_link_libraries("unit_tests"
	                  PRIVATE "mathlib"
					  PRIVATE "gtest_main"
					  PRIVATE "gmock_main")

add_test(
  NAME "unit"
  COMMAND ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
)

# Code coverage
if (ENABLE_TEST_COVERAGE)
  set(COVERAGE_LCOV_EXCLUDES "${TEST_DIR}/*" "*/googletest/*" "*/googlemock/*" "/usr/*")
  setup_target_for_coverage_lcov(
      NAME "coverage"         # New target name
      EXECUTABLE "ctest"     # Executable to run to gather coverage stats
      DEPENDENCIES "unit_tests"    # Dependencies to build first
  )
endif()
