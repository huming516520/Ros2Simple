#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CycloneDDS::ddsc" for configuration "Debug"
set_property(TARGET CycloneDDS::ddsc APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(CycloneDDS::ddsc PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/ddsc.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/ddsc.dll"
  )

list(APPEND _cmake_import_check_targets CycloneDDS::ddsc )
list(APPEND _cmake_import_check_files_for_CycloneDDS::ddsc "${_IMPORT_PREFIX}/lib/ddsc.lib" "${_IMPORT_PREFIX}/bin/ddsc.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
