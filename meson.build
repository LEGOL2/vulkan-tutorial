project('vulkan-tutorial', 'cpp')

cmake = import('cmake')

glfw_cmake_options = cmake.subproject_options()
glfw_cmake_options.add_cmake_defines({'GLFW_BUILD_WAYLAND': true})
glfw = cmake.subproject('glfw', options: glfw_cmake_options)

glm = cmake.subproject('glm')

dependencies = [
    glfw.dependency('glfw'),
    glm.dependency('glm')
]

executable('vulkan-tutorial', 'main.cpp', dependencies: dependencies)
