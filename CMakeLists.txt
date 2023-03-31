cmake_minimum_required(VERSION 3.18)

project(VulkanTutorial)

set(CMAKE_CXX_STANDARD 17)

if(WIN32)
    set(ENV{VULKAN_SDK} "C:/VulkanSDK/1.3.243.0")
endif()
find_package(Vulkan REQUIRED)

# Build GLFW from sources
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "Build the GLFW example programs")
set(GLFW_BUILD_TESTS OFF CACHE BOOL "Build the GLFW test programs")
set(GLFW_BUILD_DOCS OFF CACHE BOOL "Build the GLFW documentation")
set(GLFW_INSTALL OFF CACHE BOOL "Generate installation target")
add_subdirectory(glfw)

set(SOURCE_FILES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${Vulkan_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARIES} glfw)