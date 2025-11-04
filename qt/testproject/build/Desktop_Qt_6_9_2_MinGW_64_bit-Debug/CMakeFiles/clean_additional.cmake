# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\testproject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\testproject_autogen.dir\\ParseCache.txt"
  "testproject_autogen"
  )
endif()
