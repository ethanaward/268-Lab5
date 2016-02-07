/**
*	@file : FarmAnimal.h
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Has two member variables for the name and sound of the animal, and has get and set methods for both.
*/
#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include <string>

class FarmAnimal {

protected:
	std::string m_name;
	std::string m_sound;

public:
/**
	*  @pre None
	*  @post Creates a FarmAnimal instance with m_name set to unset and m_sound set to unset.
	*  @return None
	*/
	FarmAnimal();
/**
	*  @pre None
	*  @post None
	*  @return m_name
	*/
	std::string getName() const;
/**
	*  @pre None
	*  @post Sets m_name to the taken in string.
	*  @return None
	*/
	void setName(std::string name);
/**
	*  @pre None
	*  @post None
	*  @return m_sound
	*/
	std::string getSound() const;
/**
	*  @pre None
	*  @post Sets m_sound to the taken in string.
	*  @return None
	*/
	void setSound(std::string sound);
};

#endif
