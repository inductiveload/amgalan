CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(amgalan CXX)

SET(AMGALAN_VERSION_MAJOR 0)
SET(AMGALAN_VERSION_MINOR 1)
SET(AMGALAN_VERSION_PATCH 0)

SET(AMGALAN_VERSION ${AMGALAN_VERSION_MAJOR}.${AMGALAN_VERSION_MINOR}.${AMGALAN_VERSION_PATCH})

# configure a header file to pass some of the CMake settings
# to the source code
CONFIGURE_FILE (
  "${PROJECT_SOURCE_DIR}/include/amgalan_config.h.in"
  "${PROJECT_BINARY_DIR}/include/amgalan_config.h"
  )

INCLUDE_DIRECTORIES(${PROJECT_BINARY_DIR}/include include lib)
ADD_DEFINITIONS(-g -O2 -fsigned-char -freg-struct-return -Wall -W -Wshadow -Wpointer-arith -Wcast-qual -Winline -Werror)


ADD_SUBDIRECTORY(lib)
ADD_SUBDIRECTORY(client)
