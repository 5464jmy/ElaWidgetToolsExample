# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ElaWidgetToolsExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ElaWidgetToolsExample_autogen.dir\\ParseCache.txt"
  "ElaWidgetToolsExample_autogen"
  )
endif()
