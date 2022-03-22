#include <iostream>
#include <string>
#include <SDL.h>
#include <glad/glad.h>
void printCharacterOutput(const Uint8* state, const short& joystickState, short& switchState){
    //assign keybinds 
    std::string output="";
    if(joystickState==1){
        if(state[SDLK_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
        }else if(state[SDLK_q]){
            if(switchState == 0){
                output = 'A';
            }else if(switchState == 1){
                output = 'a';
            }else if(switchState == 2){
                output = '@';
            }
        }else if(state[SDLK_3]){
            if(switchState == 0){
                output = 'E';
            }else if (switchState == 1){
                output = 'e';
            }else if(switchState == 2){
                output = '^';
            }
        }else if(state[SDLK_4]){
            if(switchState == 0){
                output = 'I';
            }else if(switchState == 1){
                output = 'i';
            }else if(switchState == 2){
                output = '-';
            }
        }else if(state[SDLK_5]){
            if(switchState == 0){
                output = 'M';
            }else if(switchState == 1){
                output = 'm';
            }else if(switchState == 2){
                output = '[';
            }
        }else if(state[SDLK_b]){
            if(switchState == 0 ){
                output = 'Q';
            }else if(switchState == 1){
                output = 'q';
            }else if(switchState == 2){
                output = '"';
            }
        }else if(state[SDLK_a]){
            if(switchState == 0){
                output = 'U';
            }else if(switchState == 1 ){
                output = 'u';
            }else if (switchState == 2){
                output = 'upward arrow key';
            }
        }

    }else if(joystickState==2){
    }else if(joystickState==3){
    }else if(joystickState==4){
    }
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
    short switchState = 0;
    std::cout<<SDL_JoystickNumHats(joystick)<<std::endl;
    while(gameIsRunning){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            const Uint8* state = SDL_GetKeyboardState(NULL);
            if(event.type == SDL_QUIT){
                gameIsRunning=false;
            }
            if(event.type == SDL_JOYAXISMOTION){
                short joystickState = 0;
                //printCharacterOutput(state, joystickState, switchState);
                //find distinction between direction and setup printFunction call
                if(event.jaxis.axis==0){
                    if(event.jaxis.value > 1000){
                        joystickState = 4;
                    }else if(event.jaxis.value < -1000){
                        joystickState = 2;
                    }else{
                        joystickState = 0;
                    }
                }else if(event.jaxis.axis==1){
                    std::cout<<"up-down"<<std::endl;
                    std::cout<<event.jaxis.value<<std::endl;
                }
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