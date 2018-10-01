#ifndef PARTICLE_H_
#define PARTICLE_H_


namespace partexplode
{

class Particle
{
public:
	double m_x;
	double m_y;
	
	/* For Cartesian Coords
	double m_xspeed;
	double m_yspeed;
	*/
	
	//For Polar coords
	double m_speed;
	double m_direction;

	Particle();
	~Particle();
	void update(int);
};

}


#endif	//PARTICLE_H_
