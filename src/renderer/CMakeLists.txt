set( SRCS "renderer.cpp" "camera.cpp" "shader.cpp")
set( INCS "renderer.hpp" "camera.hpp" "shader.hpp")

add_library(renderer ${SRCS} ${INCS})
source_group(headers FILES ${INCS})