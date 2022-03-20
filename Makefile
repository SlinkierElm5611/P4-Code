program:
	clang++ code.cpp -o backendCode -I/opt/homebrew/include/SDL2 -I glad/include -D_THREAD_SAFE -L/opt/homebrew/lib -lSDL2