#include <iostream>
#include <string>
#include <SDL.h>
#include <glad/glad.h>
void printCharacterOutput(const Uint8* state, const short& joystickState, short& switchState){
    std::string output="";
    if(joystickState==1){
        if(state[SDL_SCANCODE_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
            output ="SWITCH STATE";
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                output = 'A';
            }else if(switchState == 1){
                output = 'a';
            }else if(switchState == 2){
                output = '@';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                output = 'E';
            }else if (switchState == 1){
                output = 'e';
            }else if(switchState == 2){
                output = '^';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                output = 'I';
            }else if(switchState == 1){
                output = 'i';
            }else if(switchState == 2){
                output = '-';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                output = 'M';
            }else if(switchState == 1){
                output = 'm';
            }else if(switchState == 2){
                output = '[';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                output = 'Q';
            }else if(switchState == 1){
                output = 'q';
            }else if(switchState == 2){
                output = '"';
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                output = 'U';
            }else if(switchState == 1 ){
                output = 'u';
            }else if (switchState == 2){
                output = "upward arrow key";
            }
        }else if(state[SDL_SCANCODE_E]){
            if(switchState == 0){
                output = 'Y'; 
            }else if(switchState == 1){
                output = 'y';
            }else if(switchState == 2){
                output = '=';
            }
        }else if(state[SDL_SCANCODE_R]){
            if(switchState == 0){
                output = '.'; 
            }else if(switchState == 1){
                output = '3';
            }
        }else if(state[SDL_SCANCODE_T]){
            if(switchState == 0){
                output = ':'; 
            }else if(switchState == 1){
                output = '7';
            }
        }
    }else if(joystickState==2){
        if(state[SDL_SCANCODE_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
            output ="SWITCH STATE";
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                output = 'B';
            }else if(switchState == 1){
                output = 'b';
            }else if(switchState == 2){
                output = '#';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                output = 'F';
            }else if (switchState == 1){
                output = 'f';
            }else if(switchState == 2){
                output = '&';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                output = 'J';
            }else if(switchState == 1){
                output = 'j';
            }else if(switchState == 2){
                output = '_';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                output = 'N';
            }else if(switchState == 1){
                output = 'n';
            }else if(switchState == 2){
                output = ']';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                output = 'R';
            }else if(switchState == 1){
                output = 'r';
            }else if(switchState == 2){
                output = '\''; //escape sequence --> not sure if this will work 
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                output = 'V';
            }else if(switchState == 1 ){
                output = 'v';
            }else if (switchState == 2){
                output = "rightward arrow key";
            }
        }else if(state[SDL_SCANCODE_E]){
            if(switchState == 0){
                output = 'Z'; 
            }else if(switchState == 1){
                output = 'z';
            }else if(switchState == 2){
                output = '|';
            }
        }else if(state[SDL_SCANCODE_R]){
            if(switchState == 0){
                output = ','; 
            }else if(switchState == 1){
                output = '4'; // switchstate 2 doesn't have an output so not sure if there will be an error if i don't put anything for it
            }
        }else if(state[SDL_SCANCODE_T]){ //for some reason this lit up green
            if(switchState == 0){
                output = '/'; 
            }else if(switchState == 1){
                output = '8';
            }
        }
    }else if(joystickState==3){
        if(state[SDL_SCANCODE_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
            output ="SWITCH STATE";
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                output = 'C';
            }else if(switchState == 1){
                output = 'c';
            }else if(switchState == 2){
                output = '$';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                output = 'G';
            }else if (switchState == 1){
                output = 'g';
            }else if(switchState == 2){
                output = '*';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                output = 'K';
            }else if(switchState == 1){
                output = 'k';
            }else if(switchState == 2){
                output = '+';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                output = 'O';
            }else if(switchState == 1){
                output = 'o';
            }else if(switchState == 2){
                output = '{';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                output = 'S';
            }else if(switchState == 1){
                output = 's';
            }else if(switchState == 2){
                output = '<'; 
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                output = 'W';
            }else if(switchState == 1 ){
                output = 'w';
            }else if (switchState == 2){
                output = "downward arrow key";
            }
        }else if(state[SDL_SCANCODE_E]){
            if(switchState == 0){
                output = '('; 
            }else if(switchState == 1){
                output = '1';
            }
        }else if(state[SDL_SCANCODE_R]){
            if(switchState == 0){
                output = '?'; 
            }else if(switchState == 1){
                output = '5'; 
            }
        }else if(state[SDL_SCANCODE_T]){ //for some reason this lit up green
            if(switchState == 0){
                output = ';'; 
            }else if(switchState == 1){
                output = '9';
            }
        }
    }else if(joystickState == 4){
        if(state[SDL_SCANCODE_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                output = 'D';
            }else if(switchState == 1){
                output = 'd';
            }else if(switchState == 2){
                output = '%';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                output = 'H';
            }else if (switchState == 1){
                output = 'h';
            }else if(switchState == 2){
                output = '`';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                output = 'L';
            }else if(switchState == 1){
                output = 'l';
            }else if(switchState == 2){
                output = '~';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                output = 'P';
            }else if(switchState == 1){
                output = 'p';
            }else if(switchState == 2){
                output = '}';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                output = 'T';
            }else if(switchState == 1){
                output = 't';
            }else if(switchState == 2){
                output = '>';
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                output = 'X';
            }else if(switchState == 1 ){
                output = 'x';
            }else if (switchState == 2){
                output = "leftward arrow key";
            }
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
        }
    }
    std::cout<<output<<std::endl;
}
void modifyText(const Uint8* state, const short& joystickState, short& switchState, std::string& text){
    if(joystickState==1){
        if(state[SDL_SCANCODE_SPACE]){
            text += ' ';
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                //output = 'A';
                text += 'A';
            }else if(switchState == 1){
                //output = 'a';
                text += 'a';
            }else if(switchState == 2){
                //output = '@';
                text += '@';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                //output = 'E';
                text += 'E';
            }else if (switchState == 1){
                //output = 'e';
                text += 'e';
            }else if(switchState == 2){
                //output = '^';
                text += '^';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                //output = 'I';
                text += 'I';
            }else if(switchState == 1){
                //output = 'i';
                text += 'i';
            }else if(switchState == 2){
                //output = '-';
                text += '-';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                //output = 'M';
                text += 'M';
            }else if(switchState == 1){
                //output = 'm';
                text += 'm';
            }else if(switchState == 2){
                //output = '[';
                text += '[';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                //output = 'Q';
                text += 'Q';
            }else if(switchState == 1){
                //output = 'q';
                text += 'q';
            }else if(switchState == 2){
                //output = '"';
                text += '"';
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                //output = 'U';
                text += 'U';
            }else if(switchState == 1 ){
                //output = 'u';
                text += 'u';
            }else if (switchState == 2){
                //output = "upward arrow key";
                //maybe implement a reset key here to remove everything in ram
            }
        }else if(state[SDL_SCANCODE_E]){
            if(switchState == 0){
                //output = 'Y'; 
                text += 'Y';
            }else if(switchState == 1){
                //output = 'y';
                text += 'y';
            }else if(switchState == 2){
                //output = '=';
                text += '=';
            }
        }else if(state[SDL_SCANCODE_R]){
            if(switchState == 0){
                //output = '.'; 
                text += '.';
            }else if(switchState == 1){
                //output = '3';
                text += '3';
            }
        }else if(state[SDL_SCANCODE_T]){
            if(switchState == 0){
                //output = ':'; 
                text += ':';
            }else if(switchState == 1){
                //output = '7';
                text += '7';
            }
        }
    }else if(joystickState==2){
        if(state[SDL_SCANCODE_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                //output = 'B';
                text += 'B';
            }else if(switchState == 1){
                //output = 'b';
                text += 'b';
            }else if(switchState == 2){
                //output = '#';
                text += '#';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                //output = 'F';
                text += 'F';
            }else if (switchState == 1){
                //output = 'f';
                text += 'f';
            }else if(switchState == 2){
                //output = '&';
                text += '&';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                //output = 'J';
                text += 'J';
            }else if(switchState == 1){
                //output = 'j';
                text += 'j';
            }else if(switchState == 2){
                //output = '_';
                text += '_';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                //output = 'N';
                text += 'N';
            }else if(switchState == 1){
                //output = 'n';
                text += 'n';
            }else if(switchState == 2){
                //output = ']';
                text += ']';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                //output = 'R';
                text += 'R';
            }else if(switchState == 1){
                //output = 'r';
                text += 'r';
            }else if(switchState == 2){
                //output = '\''; //escape sequence --> not sure if this will work 
                text += '\'';
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                //output = 'V';
                text += 'V';
            }else if(switchState == 1 ){
                //output = 'v';
                text += 'v';
            }else if (switchState == 2){
                //output = "rightward arrow key";
            }
        }else if(state[SDL_SCANCODE_E]){
            if(switchState == 0){
                //output = 'Z'; 
                text += 'Z';
            }else if(switchState == 1){
                //output = 'z';
                text += 'z';
            }else if(switchState == 2){
                //output = '|';
                text += '|';
            }
        }else if(state[SDL_SCANCODE_R]){
            if(switchState == 0){
                //output = ','; 
                text += ',';
            }else if(switchState == 1){
                //output = '4'; // switchstate 2 doesn't have an //output so not sure if there will be an error if i don't put anything for it
                text += '4';
            }
        }else if(state[SDL_SCANCODE_T]){ //for some reason this lit up green
            if(switchState == 0){
                //output = '/'; 
                text += '/';
            }else if(switchState == 1){
                //output = '8';
                text += '8';
            }
        }
    }else if(joystickState==3){
        if(state[SDL_SCANCODE_SPACE]){
            if(text.size() != 0){
                text.pop_back();
            }
            //output ="SWITCH STATE";
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                //output = 'C';
                text += 'C';
            }else if(switchState == 1){
                //output = 'c';
                text += 'c';
            }else if(switchState == 2){
                //output = '$';
                text += '$';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                //output = 'G';
                text += 'G';
            }else if (switchState == 1){
                //output = 'g';
                text += 'g';
            }else if(switchState == 2){
                //output = '*';
                text += '*';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                //output = 'K';
                text += 'K';
            }else if(switchState == 1){
                //output = 'k';
                text += 'k';
            }else if(switchState == 2){
                //output = '+';
                text += '+';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                //output = 'O';
                text += 'O';
            }else if(switchState == 1){
                //output = 'o';
                text += 'o';
            }else if(switchState == 2){
                //output = '{';
                text += '{';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                //output = 'S';
                text += 'S';
            }else if(switchState == 1){
                //output = 's';
                text += 's';
            }else if(switchState == 2){
                //output = '<'; 
                text += '<';
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                //output = 'W';
                text += 'W';
            }else if(switchState == 1 ){
                //output = 'w';
                text += 'w';
            }else if (switchState == 2){
                //output = "downward arrow key";
            }
        }else if(state[SDL_SCANCODE_E]){
            if(switchState == 0){
                //output = '('; 
                text += '(';
            }else if(switchState == 1){
                //output = '1';
                text += '1';
            }
        }else if(state[SDL_SCANCODE_R]){
            if(switchState == 0){
                //output = '?'; 
                text += '?';
            }else if(switchState == 1){
                //output = '5'; 
                text += '5';
            }
        }else if(state[SDL_SCANCODE_T]){ //for some reason this lit up green
            if(switchState == 0){
                //output = ';'; 
                text += ';';
            }else if(switchState == 1){
                //output = '9';
                text += '9';
            }
        }
    }else if(joystickState == 4){
        if(state[SDL_SCANCODE_SPACE]){
            switchState++;
            if(switchState==3){
                switchState = 0;
            }
        }else if(state[SDL_SCANCODE_Q]){
            if(switchState == 0){
                //output = 'D';
                text += 'D';
            }else if(switchState == 1){
                //output = 'd';
                text += 'd';
            }else if(switchState == 2){
                //output = '%';
                text += '%';
            }
        }else if(state[SDL_SCANCODE_3]){
            if(switchState == 0){
                //output = 'H';
                text += 'H';
            }else if (switchState == 1){
                //output = 'h';
                text += 'h';
            }else if(switchState == 2){
                //output = '`';
                text += '`';
            }
        }else if(state[SDL_SCANCODE_4]){
            if(switchState == 0){
                //output = 'L';
                text += 'L';
            }else if(switchState == 1){
                //output = 'l';
                text += 'l';
            }else if(switchState == 2){
                //output = '~';
                text += '~';
            }
        }else if(state[SDL_SCANCODE_5]){
            if(switchState == 0){
                //output = 'P';
                text += 'P';
            }else if(switchState == 1){
                //output = 'p';
                text += 'p';
            }else if(switchState == 2){
                //output = '}';
                text += '}';
            }
        }else if(state[SDL_SCANCODE_B]){
            if(switchState == 0 ){
                //output = 'T';
                text += 'T';
            }else if(switchState == 1){
                //output = 't';
                text += 't';
            }else if(switchState == 2){
                //output = '>';
                text += '>';
            }
        }else if(state[SDL_SCANCODE_A]){
            if(switchState == 0){
                //output = 'X';
                text += 'X';
            }else if(switchState == 1 ){
                //output = 'x';
                text += 'x';
            }else if (switchState == 2){
                //output = "leftward arrow key";
            }
        }
    }
}
int main(int argc, char* argv[]){
    SDL_Window* window = nullptr;
    SDL_Surface* surface = nullptr;
    SDL_Renderer* renderer = nullptr;
    SDL_Joystick* joystick = nullptr;
    SDL_Surface* state1Window = nullptr;
    SDL_Surface* state2Window = nullptr;
    SDL_Surface* state3Window = nullptr;
    SDL_Texture* state1 = nullptr;
    SDL_Texture* state2 = nullptr;
    SDL_Texture* state3 = nullptr;
    SDL_Texture* texture = nullptr;
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
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            1024,
            768,
            SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(window, -1, 0);
    state1Window = SDL_LoadBMP("State1.bmp");
    state2Window = SDL_LoadBMP("State2.bmp");
    state3Window = SDL_LoadBMP("State3.bmp");
    state1 = SDL_CreateTextureFromSurface(renderer, state1Window);
    state2 = SDL_CreateTextureFromSurface(renderer, state2Window);
    state3 = SDL_CreateTextureFromSurface(renderer, state3Window);
    texture = state1;
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    bool gameIsRunning = true;
    short switchState = 0;
    std::string text = "";
    while(gameIsRunning){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            const Uint8* state = SDL_GetKeyboardState(NULL);
            if(event.type == SDL_QUIT){
                gameIsRunning=false;
            }
            if(event.type == SDL_JOYAXISMOTION){
                short joystickState = 0;
                if(event.jaxis.axis==0){
                    if(event.jaxis.value > 1000){
                        joystickState = 4;
                    }else if(event.jaxis.value < -1000){
                        joystickState = 2;
                    }else{
                        joystickState = 0;
                    }
                }else if(event.jaxis.axis==1){
                    if(event.jaxis.value > 1000){
                        joystickState = 1;
                    }else if(event.jaxis.value < -1000){
                        joystickState = 3;
                    }else{
                        joystickState = 0;
                    }
                }
                if(joystickState!=0){
                    short currentSwitchState = switchState;
                    modifyText(state, joystickState, switchState, text);
                    if(switchState != currentSwitchState){
                        if(switchState == 0){
                            SDL_RenderCopy(renderer, state1, NULL, NULL);
                        }else if(switchState == 1){
                            SDL_RenderCopy(renderer, state2, NULL, NULL);
                        }else{
                            SDL_RenderCopy(renderer, state3, NULL, NULL);
                        }
                        SDL_RenderPresent(renderer);
                    }else{
                        std::cout<<text<<std::endl;
                    }
                }
            }
        }
    }
    SDL_DestroyTexture(texture);
    SDL_DestroyTexture(state1);
    SDL_DestroyTexture(state2);
    SDL_DestroyTexture(state3);
    SDL_FreeSurface(state1Window);
    SDL_FreeSurface(state2Window);
    SDL_FreeSurface(state3Window);
    SDL_DestroyWindow(window);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}