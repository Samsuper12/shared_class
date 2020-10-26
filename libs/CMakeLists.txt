
add_library(first_lib SHARED first_lib.cxx)

#Check EXCLUDE_FROM_ALL

set_target_properties(first_lib
PROPERTIES
  CXX_STANDARD 20
  CXX_STANDARD_REQUIRED YES
  CXX_EXTENSIONS YES
)
