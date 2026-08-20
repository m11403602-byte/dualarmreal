#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hiwin_robot_client_library::hrsdk" for configuration "Release"
set_property(TARGET hiwin_robot_client_library::hrsdk APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hiwin_robot_client_library::hrsdk PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhrsdk.so"
  IMPORTED_SONAME_RELEASE "libhrsdk.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hiwin_robot_client_library::hrsdk )
list(APPEND _IMPORT_CHECK_FILES_FOR_hiwin_robot_client_library::hrsdk "${_IMPORT_PREFIX}/lib/libhrsdk.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
