project(chapter_2)

# INCLUDES
###############################################################################

include_directories(
  include/
)

# LIBRARY
###############################################################################
add_library( ${PROJECT_NAME}_2_math
  src/math_function.cpp
)

add_library( ${PROJECT_NAME}_2_math_1
  src/math_1_function.cpp
)

# EXECUTABLES
###############################################################################

add_executable( ${PROJECT_NAME}_2_1
  src/main_2_1.cpp
)

add_executable( ${PROJECT_NAME}_2
  src/main_2_2.cpp
)

add_executable( ${PROJECT_NAME}_2_2_demo
  src/main_2_2_demo.cpp
)

add_executable( ${PROJECT_NAME}_part_1
  src/part_1.cc
)

add_executable( ${PROJECT_NAME}_part_2
  src/part_2.cc
)

  add_executable( ${PROJECT_NAME}_part_3
  src/part_3.cc
)

  add_executable( ${PROJECT_NAME}_test
  src/test1.cc
)

  add_executable( ${PROJECT_NAME}_test2
  src/test2.cc
)

# LINK LIBRARIES
###############################################################################

target_link_libraries( ${PROJECT_NAME}_2_1
  ${PROJECT_NAME}_2_math
)

target_link_libraries( ${PROJECT_NAME}_2
  ${PROJECT_NAME}_2_math
  ${PROJECT_NAME}_2_math_1
)

target_link_libraries( ${PROJECT_NAME}_2_math_1
  ${PROJECT_NAME}_2_math
)

target_link_libraries( ${PROJECT_NAME}_2_2_demo
  ${PROJECT_NAME}_2_math_1
)
