CXX := g++
CFLAGS = -O3
LDFLAGS =
appname = particleAnimation

all: $(appname)
clean:
	rm -f $(appname) *.o
.PHONY: all clean

SDL_CFLAGS := $(shell sdl2-config --cflags)
SDL_LDFLAGS := $(shell sdl2-config --libs)


$(appname): main.cpp Screen.cpp Particle.cpp Swarm.cpp
	$(CXX) $(CFLAGS) -o $@ $^ $(SDL_CFLAGS) $(SDL_LDFLAGS)
