CC=g++
CFLAGS=-c -g -Wall -Dmain=SDL_main
LDFLAGS=-I/usr/local/include/SDL2 -D_THREAD_SAFE -lSDL2main -lSDL2 -lSDL2_image
SOURCES=model.cpp view.cpp controller.cpp main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab5.exe

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE):
	$(CC) -g $(SOURCES) $(LDFLAGS) -o $@

clean:
	rm $(EXECUTABLE)
