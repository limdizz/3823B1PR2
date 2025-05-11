cmake_minimum_required(VERSION 3.10)
project(lab5_parser)

set(CMAKE_CXX_STANDARD 17)

# Paths
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(ANTLR_DIR "${CMAKE_SOURCE_DIR}/antlr")
set(ANTLR_INCLUDE "/include/antlr4-runtime")
set(ANTLR_LIB "/lib/antlr4-runtime.lib")

# main.cpp
set(MAIN_FILE "main.cpp")

# Other cpp-files (not including main.cpp)
file(GLOB_RECURSE OTHER_SRC "${SRC_DIR}/*.cpp")
list(REMOVE_ITEM OTHER_SRC ${MAIN_FILE})

# Headers
file(GLOB_RECURSE TARGET_HDR "${INCLUDE_DIR}/*.h")

# Add executable file (main + other)
add_executable(${PROJECT_NAME} ${MAIN_FILE} ${OTHER_SRC} ${TARGET_HDR})

# Includes
target_include_directories(${PROJECT_NAME}
    PUBLIC ${INCLUDE_DIR}
           ${ANTLR_DIR}${ANTLR_INCLUDE}
)

# Link Libraries
target_link_libraries(${PROJECT_NAME}
    ${ANTLR_DIR}${ANTLR_LIB}
)

# Path to DLL-file
set(ANTLR_DLL "${ANTLR_DIR}/lib/antlr4-runtime.dll")

# Copy DLL after building
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${ANTLR_DLL}"
            $<TARGET_FILE_DIR:${PROJECT_NAME}>
)