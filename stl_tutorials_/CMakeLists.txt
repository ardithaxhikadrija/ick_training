project(std_tutorials_)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)


# INCLUDES
###############################################################################

include_directories(
  include/
)

# Add Executable
###############################################################################
add_executable( ${PROJECT_NAME}sort
   src/sort.cc
)

add_executable( ${PROJECT_NAME}search
   src/search.cc
)

# Target Link Libraries
###############################################################################
target_link_libraries( ${PROJECT_NAME}sort
  Eigen3::Eigen
)

target_link_libraries( ${PROJECT_NAME}search
  Eigen3::Eigen
)