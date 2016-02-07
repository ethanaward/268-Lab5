/**
*	@file : CyberChicken.h
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Inherits from the Chicken class, and adds two new public methods for getting and setting eggs.
*/
#ifndef CYBERCHICKEN_H
#define CYBERCHICKEN_H

#include "Chicken.h"

class CyberChicken:public Chicken {

public:
/**
	*  @pre None
	*  @post Creates a CyberChicken instance, with m_name set to Cyber Chicken and m_sound set to Resistance is Futile.
	*  @return None
	*/
	CyberChicken();
/**
	*  @pre None
	*  @post None
	*  @return The member variable m_eggs.
	*/
	int getCyberEggs() const;
/**
	*  @pre None
	*  @post Sets m_eggs to the taken in value.
	*  @return None
	*/
	void setCyberEggs(int eggs);
};

#endif
