/**
*	@file : Cow.h
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Inherits from the FarmAnimal class, and adds a variable for amount of milk produced and two public methods for getting and setting the amount of milk produced. In its constuctor, sets m_name and m_sound to specific values.
*/
#ifndef COW_H
#define COW_H

#include "FarmAnimal.h"

class Cow:public FarmAnimal {

protected:
	double m_milkProduced;
public:
/**
	*  @pre None
	*  @post Creates an instance of the Cow class, setting m_name to Cow and m_sound to Moo.
	*  @return None
	*/
	Cow();
/**
	*  @pre None
	*  @post None
	*  @return m_milkProduced
	*/
	double getMilkProduced() const;
/**
	*  @pre None
	*  @post Sets m_milkProduced to the given value if it is greater than 0, otherwise sets it to 0.
	*  @return None
	*/
	void setMilkProduced(double gallons);
};

#endif
