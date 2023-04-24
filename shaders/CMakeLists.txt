if(WIN32)
    set(GLSLC "C:/VulkanSDK/1.3.243.0/Bin/glslc.exe")
else()
    set(GLSLC "glslc")
endif()

add_custom_target(compile_shaders ALL
    COMMAND ${GLSLC} ${CMAKE_CURRENT_SOURCE_DIR}/shader.vert -o ${CMAKE_CURRENT_BINARY_DIR}/vert.spv
    COMMAND ${GLSLC} ${CMAKE_CURRENT_SOURCE_DIR}/shader.frag -o ${CMAKE_CURRENT_BINARY_DIR}/frag.spv)
