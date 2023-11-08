# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Estacion_Terrena_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Estacion_Terrena_autogen.dir\\ParseCache.txt"
  "Estacion_Terrena_autogen"
  )
endif()
