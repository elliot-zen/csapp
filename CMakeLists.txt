cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(main VERSION 1.0)
add_subdirectory(utils)
add_executable(main main.c)

target_link_libraries(main PUBLIC utils)
target_include_directories(main PUBLIC 
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}/utils"
)
