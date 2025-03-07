#include "game.h"

int main(int argc, char* argv[]) {
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    initSDL(window, renderer);

    gameLoop(renderer);

    quitSDL(window, renderer);
    return 0;
}
