cmake_minimum_required( VERSION 3.15...3.19 )

project( run_tests
         VERSION 0.0.1
         DESCRIPTION "Unit tests." )

add_executable( ${PROJECT_NAME} )

target_sources( ${PROJECT_NAME}
    PRIVATE   
        "${CMAKE_CURRENT_SOURCE_DIR}/main.c"
)

target_compile_features( ${PROJECT_NAME}
    PRIVATE 
        cxx_std_20
)

target_compile_options( ${PROJECT_NAME}
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

target_link_libraries( ${PROJECT_NAME}
    PRIVATE
        ucrc
)

# add_subdirectory( 
#     ${CMAKE_CURRENT_SOURCE_DIR}/../externals/catch2
#     ${CMAKE_CURRENT_BINARY_DIR}/catch2
# )