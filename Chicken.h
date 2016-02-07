/**
*	@file : Chicken.h
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Inherits from the FarmAnimal class, and adds a variable for number of eggs and two protected methods for getting and setting the amount of eggs. In its constuctor, sets m_name and m_sound to specific values.
*/
#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"

class Chicken:public FarmAnimal {

protected:
/**
	*  @pre None
	*  @post None
	*  @return The member variable m_eggs.
	*/
	int getEggs() const;
/**
	*  @pre None
	*  @post Sets m_eggs to the taken in value.
	*  @return None
	*/
	void setEggs(int eggs);
	int m_eggs;
public:
/**
	*  @pre None
	*  @post Creates an instance of the chicken class, with m_name set to Chicken and m_sound set to Cluck.
	*  @return None
	*/
	Chicken();
};

#endif
