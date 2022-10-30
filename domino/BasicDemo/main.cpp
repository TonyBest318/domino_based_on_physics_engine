#include "BasicDemo.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char** argv) {
    BasicDemo demo;
    glutmain(argc, argv, 800, 600, "bullet and opengl", &demo);
    return 0;
}