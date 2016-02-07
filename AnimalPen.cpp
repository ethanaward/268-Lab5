/**
*	@file : AnimalPen.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Implements the methods outlined in AnimalPen.h.
*/

#include "AnimalPen.h"

AnimalPen::AnimalPen() {

}

AnimalPen::~AnimalPen() {

	while(!isEmpty()) {
		pop();
	}

}

void AnimalPen::addAnimal(FarmAnimal* animal) {
	
	push(animal);

}

FarmAnimal* AnimalPen::peekAtNextAnimal() {

	return(peek());

}

void AnimalPen::releaseAnimal() {

	pop();

}

bool AnimalPen::isPenEmpty() {

	if(isEmpty()) {
		return(true);
	}	

	else {
		return(false);
	}

}

