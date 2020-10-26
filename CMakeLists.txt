cmake_minimum_required(VERSION 3.18)

project(shared_class
    LANGUAGES CXX
)

add_subdirectory(libs)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
PRIVATE
  main.cxx
)

target_link_libraries(${PROJECT_NAME}
PRIVATE
  dl
)

set_target_properties(${PROJECT_NAME}
PROPERTIES
  CXX_STANDARD 20
  CXX_STANDARD_REQUIRED YES
  CXX_EXTENSIONS YES
  OUTPUT_NAME "test01"
)

#target_compile_options(${PROJECT_NAME}
  #PRIVATE
#  )
