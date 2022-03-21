#include <iostream>
#include <SDL.h>
#include <glad/glad.h>
void printCharacterOutput(const Uint8 state, const short& joystickState){
    char output;
}
int main(int argc, char* argv[]){
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "SDL could not be initialized: " <<
                  SDL_GetError();
    }else{
        std::cout << "SDL video system is ready to go\n";
    }
    /*
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    */
    window = SDL_CreateWindow("C++ SDL2 Window",
            0,
            0,
            640,
            480,
            SDL_WINDOW_OPENGL);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    /*
    SDL_GLContext context;
    context = SDL_GL_CreateContext(window);
    gladLoadGLLoader(SDL_GL_GetProcAddress);
    */
    bool gameIsRunning = true;
    while(gameIsRunning){
        //glViewport(0,0,640,480);
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            const Uint8* state = SDL_GetKeyboardState(NULL);
            if(event.type == SDL_QUIT){
                gameIsRunning=false;
            }else if(state[SDL_SCANCODE_RIGHT]){
                std::cout<<"right arrow key pressed"<<std::endl;
            }
            if(event.type == SDL_KEYDOWN){
                std::cout<<"a key was pressed"<<std::endl;
            }
            SDL_RenderClear(renderer);
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
            SDL_RenderDrawLine(renderer,5,5,100,120);
            SDL_RenderPresent(renderer);
        }
        /*
        glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        SDL_GL_SwapWindow(window);
        */
    }
    SDL_DestroyWindow(window);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}