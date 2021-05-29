#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion &operator = (RadScorpion const &obj);
		RadScorpion(RadScorpion const &obj);
};

#endif