cmake_minimum_required(VERSION 3.0)
project(BasicDemo)

set(OpenGL_GL_PREFERENCE GLVND)
find_package(Bullet REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED STATIC)
find_package(glm REQUIRED)
find_package(GLUT REQUIRED)

set(SOURCE_FILES ${SOURCE_FILES} 
   BasicDemo.cpp
   BulletOpenGLApplication.cpp
   GameObject.cpp
   main.cpp
)

add_executable(BasicDemo ${SOURCE_FILES})
target_include_directories(BasicDemo PUBLIC ${BULLET_INCLUDE_DIR})
target_compile_definitions(BasicDemo PUBLIC ${BULLET_DEFINITIONS})
target_link_directories(BasicDemo PUBLIC ${Bullet_DIR}/${BULLET_ROOT_DIR}/${BULLET_LIBRARY_DIRS})
target_link_libraries(BasicDemo PUBLIC BulletDynamics BulletCollision LinearMath
	GL GLEW glfw ${OPENGL_LIBRARIES} ${GLFW3_LIBRARY} ${GLEW_LIBRARY} ${GLUT_LIBRARY})
