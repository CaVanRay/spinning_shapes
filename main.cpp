include <iostream>
#include <glad/glad.h>
#include <SDL.h>

int main(int argc, char* argv[]){
    SDL_Window* window = nullptr;

    int screen_width = 1000;
    int screen_height = 800;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL failed initialization. " << SDL_GetError();
        return -1;
    } else {
        std::cout << "SDL successfully initialized.";
    }
