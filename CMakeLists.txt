cmake_minimum_required( VERSION 3.15...3.19 )

option(UCRC_BUILD_TESTS "compile the tests" ON)

project( ucrc
         VERSION 0.0.1
         DESCRIPTION "crc libarary." )

add_library( ${PROJECT_NAME} )
# Create ALIAS targets.
add_library( ucrc::ucrc ALIAS ${PROJECT_NAME} )

target_sources( ${PROJECT_NAME}
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include/ucrc/ucrc.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/ucrc/ucrc_crc8.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/ucrc/ucrc_settings_crc8.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/ucrc.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/ucrc_crc8.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/ucrc_settings_crc8.c"
)

target_include_directories( ${PROJECT_NAME}
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

if( UCRC_BUILD_TESTS )
    enable_testing()
    add_subdirectory(tests)
    add_test(NAME ucrc_tests COMMAND run_tests )
endif( UCRC_BUILD_TESTS )
