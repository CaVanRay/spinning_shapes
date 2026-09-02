Just a tutorial I found online that sounded fun.

making different shapes spin on screen


command for compiling: 

clang++ -std=c++20 main.cpp ./glad/src/glad.c -I./glad/include -o spinning_shapes $(pkg-config --cflags --libs sdl2) -ldl   

required:
- [x] SDL2
- [x] GLM (OpenGL Mathematics)
- [x] Mesa drivers for OpenGL
- [x] GLAD Loader
