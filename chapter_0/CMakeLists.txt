project(chapter_0)

include_directories(
  include/
)

# Libraries

add_library( ${PROJECT_NAME}
  src/class_test.cpp
)

# EXECUTABLES

add_executable( ${PROJECT_NAME}_exec
  src/main.cpp
)

# Link Libraries

target_link_libraries( ${PROJECT_NAME}_exec
  ${PROJECT_NAME}
)
    