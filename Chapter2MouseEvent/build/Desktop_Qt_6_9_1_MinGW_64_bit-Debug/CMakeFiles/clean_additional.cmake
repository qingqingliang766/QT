# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Chapter2MouseEvent_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Chapter2MouseEvent_autogen.dir\\ParseCache.txt"
  "Chapter2MouseEvent_autogen"
  )
endif()
