#ifndef PARTICLE_H_
#define PARTICLE_H_


namespace partexplode
{

struct Particle
{
	double m_x;
	double m_y;
	
	/* For Cartesian Coords
	double m_xspeed;
	double m_yspeed;
	*/
	
	//For Polar coords
	double m_speed;
	double m_direction;

public:
	Particle();
	~Particle();
	void update(int);
};

}


#endif	//PARTICLE_H_
