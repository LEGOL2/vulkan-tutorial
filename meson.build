project('vulkan-tutorial', 'cpp', default_options: 'cpp_std=c++17')

cmake = import('cmake')

glfw_cmake_options = cmake.subproject_options()
glfw_cmake_options.add_cmake_defines({'GLFW_BUILD_WAYLAND': true})
glfw = cmake.subproject('glfw', options: glfw_cmake_options)

glm = cmake.subproject('glm')

dependencies = [
    glfw.dependency('glfw'),
    glm.dependency('glm'),
    dependency('vulkan'),
    dependency('threads')
]

compiler_flags = [
#    '-g'
]

sources = files('main.cpp')
subdir('application')

executable('vulkan-tutorial', sources: sources, dependencies: dependencies, cpp_args: compiler_flags)
