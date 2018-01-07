#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace partexplode
{

class Swarm
{
public:
	const static int NPARTICLES = 2000;

private:
	Particle *m_pParticles;
	int lastTime;

public:
	Swarm();
	~Swarm();
	void update(int);
	const Particle * const getParticle() {return m_pParticles; }
};

}

#endif	//SWARM_H_
