#include <iostream>
#include <SDL.h>
#include <glad/glad.h>
void printCharacterOutput(const Uint8* state, const short& joystickState){
    //assign keybinds 
    char output=0;
    std::cout<<output<<std::endl;
}
int main(int argc, char* argv[]){
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    SDL_Joystick* joystick = nullptr;
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_JOYSTICK) < 0){
        std::cout << "SDL could not be initialized: " <<
                  SDL_GetError();
    }else{
        std::cout << "SDL video system is ready to go\n";
    }
    if(SDL_NumJoysticks()!=0){
        SDL_JoystickEventState(SDL_ENABLE);
        joystick = SDL_JoystickOpen(0);
    }else{
        std::cerr<<"Joystick Not Detected! Please plug it in"<<std::endl; 
        short counter = 0;
        while(true){
            SDL_Delay(1000);
            if(SDL_NumJoysticks()==0){
                std::cerr<<"Joystick Not Detected!"<<std::endl;
                SDL_Quit();
                if(counter == 100){
                    return 0;
                }
                SDL_Init(SDL_INIT_VIDEO|SDL_INIT_JOYSTICK);
                counter++;
            }else{
                SDL_JoystickEventState(SDL_ENABLE);
                joystick = SDL_JoystickOpen(0);
                break;
            }
        }
    }
    window = SDL_CreateWindow("C++ SDL2 Window",
            0,
            0,
            640,
            480,
            SDL_WINDOW_OPENGL);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    bool gameIsRunning = true;
    while(gameIsRunning){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            const Uint8* state = SDL_GetKeyboardState(NULL);
            if(event.type == SDL_QUIT){
                gameIsRunning=false;
            }
            if(event.type == SDL_JOYAXISMOTION){
                short joystickState = 0;
                printCharacterOutput(state, joystickState);
                //find distinction between direction and setup printFunction call
            }
            SDL_RenderClear(renderer);
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
            SDL_RenderDrawLine(renderer,5,5,100,120);
            SDL_RenderPresent(renderer);
        }
    }
    SDL_DestroyWindow(window);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}