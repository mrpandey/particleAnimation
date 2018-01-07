#include "Particle.h"
#include <stdlib.h>
#include <math.h>


namespace partexplode
{

Particle::Particle(): m_x(0), m_y(0)
{
	/* For Cartesian Coordinates
	m_x = (2.0 * rand())/RAND_MAX - 1;
	m_y = (2.0 * rand())/RAND_MAX - 1;
	m_xspeed = ((2.0 * rand())/RAND_MAX - 1 ) * 0.01;
	m_yspeed = ((2.0 * rand())/RAND_MAX - 1 ) * 0.01;
	*/
	
	//Polar goes here
	m_direction = (2 * M_PI * rand())/RAND_MAX;
	m_speed = (0.1 * rand())/RAND_MAX;
}

Particle::~Particle() {}

void Particle::update(int interval)
{
	/*For Cartesian coords
	m_x += m_xspeed;
	m_y += m_yspeed;
	
	if(m_x <= -1.0 || m_x >= 1.0)
		m_xspeed = - m_xspeed;
	
	if(m_y <= -1.0 || m_y >= 1.0)
		m_yspeed = - m_yspeed;
	*/
	
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);
	
	m_x += xspeed * interval;	//interval is used for making speed constant on different systems
	m_y += yspeed * interval;
	
	m_direction += 0.005;
}

}
