#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace partexplode;

int main()
{
	//srand(time(NULL));
	Screen screen;
	
	if(screen.init() == false)
	{
		cout << "SDL initialization failed." << endl;
	}
	
	Swarm swarm;
	
	while(true)
	{
		//Update particles
		
		//Draw particles
		
		int elapsed = SDL_GetTicks();
		
		//screen.clear();
		swarm.update(elapsed);
		
		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char green = (unsigned char)((1 + cos(elapsed * 0.0003)) * 128);
		
		const Particle * const pParticle = swarm.getParticle();
		
		for(int i=0; i < Swarm::NPARTICLES; i++)
		{
			Particle particle = pParticle[i];
			int x = particle.m_x  + Screen::SCREEN_WIDTH/2;
			int y = particle.m_y  + Screen::SCREEN_HEIGHT/2;
			
			screen.setPixel(x, y, red, blue, green);
		}
		
		screen.boxBlur();
		
		//Draw the screen
		screen.update();
		
		//Check for messages and events
		
		if(screen.processEvents() == false)
			break;
	}
	
	screen.close();
	
	return 0;
}
