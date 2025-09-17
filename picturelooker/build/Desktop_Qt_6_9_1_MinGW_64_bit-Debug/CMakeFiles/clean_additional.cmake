# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\picturelooker_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\picturelooker_autogen.dir\\ParseCache.txt"
  "picturelooker_autogen"
  )
endif()
