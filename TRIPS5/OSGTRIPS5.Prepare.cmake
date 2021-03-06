
MESSAGE(STATUS "Prepare OSGTRIPS5")

GET_FILENAME_COMPONENT(_CMAKE_CURR_LIST_DIR ${CMAKE_CURRENT_LIST_FILE} PATH)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${_CMAKE_CURR_LIST_DIR}/CMake")

#INCLUDE(ConfigurePackages.OSGTuioSensor)

#OSG_CONFIGURE_TUIO_CPP(${OSG_SUPPORT_ROOT})

OSG_FIND_PACKAGE(FMOD)

IF(FMOD_FOUND)
  OSG_SET(OSG_WITH_FMOD TRUE)
ENDIF()

#IF(NOT OSG_WITH_TUIO_CPP AND OSG_EXT_SUPPORT_ROOT)
#  OSG_CONFIGURE_TUIO_CPP(${OSG_EXT_SUPPORT_ROOT})
#ENDIF()

#LIST(APPEND OSG_ADDITIONAL_CONFIGURE_LINES "#cmakedefine OSG_WITH_VLC 1")

INSTALL(
  FILES "${_CMAKE_CURR_LIST_DIR}/CMake/FindFMOD.cmake"
  DESTINATION share/OpenSG/cmake
  COMPONENT development_configuration)

MESSAGE("  with fmod   : ${OSG_WITH_FMOD}")
MESSAGE("")

