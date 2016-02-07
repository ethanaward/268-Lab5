/**
*	@file : AnimalPen.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Inherits from Stack.h. Each method is a FarmAnimal specific version of Stack methods, and each uses Stack methods to implement it.
*/
#ifndef ANIMALPEN_H
#define ANIMALPEN_H

#include "Stack.h"
#include "FarmAnimal.h"

class AnimalPen:public Stack<FarmAnimal*> {

public:
/**
	*  @pre None
	*  @post Initializes a AnimalPen instance of a stack with T set to FarmAnimal*. 
	*  @return None
	*/
	AnimalPen();
/**
	*  @pre None
	*  @post Deletes the stack by calling the pop() method.
	*  @return None
	*/
	~AnimalPen();
/**
	*  @pre None
	*  @post Adds a new node on the top of the list with the passed in FarmAnimal*, using the push() method.
	*  @return None
	*/
	void addAnimal(FarmAnimal* animal);
/**
	*  @pre None
	*  @post None
	*  @return A pointer to the next animal in the pen.
	*/
	FarmAnimal* peekAtNextAnimal();
/**
	*  @pre None
	*  @post Uses the pop() method to release the top animal in the pen.
	*  @return None
	*/
	void releaseAnimal();
/**
	*  @pre None
	*  @post None
	*  @return True if the pen is empty, False if it isn't.
	*/
	bool isPenEmpty();
};

#endif
