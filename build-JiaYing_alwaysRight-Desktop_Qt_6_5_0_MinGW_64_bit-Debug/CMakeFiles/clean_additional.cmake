# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\JiaYing_alwaysRight_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\JiaYing_alwaysRight_autogen.dir\\ParseCache.txt"
  "JiaYing_alwaysRight_autogen"
  )
endif()
