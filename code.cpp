#include <iostream>
#include <SDL2/SDL.h>
int main(int argc, char* argv[]){
    SDL_Window* window=nullptr;
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "SDL could not be initialized: " <<
                  SDL_GetError();
    }else{
        std::cout << "SDL video system is ready to go\n";
    }
    window = SDL_CreateWindow("C++ SDL2 Window",
            0,
            0,
            640,
            480,
            SDL_WINDOW_SHOWN);
    bool gameIsRunning = true;
    while(gameIsRunning){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                gameIsRunning = false;
            }else if(event.type == SDL_KEYDOWN){
                std::cout<<"a key was pressed"<<std::endl;
            }
            const Uint8* state = SDL_GetKeyboardState(NULL);
            if(state[SDL_SCANCODE_RIGHT]){
                std::cout<<"Right arrow key is pressed"<<std::endl;
            }
        }
    }
    SDL_DestroyWindow(window);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}
