cmake_minimum_required(VERSION 3.10)
project(projet_non_guider)
add_subdirectory(src)
add_subdirectory(tests)
# Enable testing
enable_testing()
# Doxygen configuration
find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)    
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)    
    add_custom_target(doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM)
endif()
