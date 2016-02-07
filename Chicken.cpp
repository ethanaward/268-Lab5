/**
*	@file : Chicken.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Implements the methods outlined in Chicken.h.
*/
#include "Chicken.h"

Chicken::Chicken() {

setName("Chicken");
setSound("Cluck");

}

int Chicken::getEggs() const {

return(m_eggs);

}

void Chicken::setEggs(int eggs) {

m_eggs = eggs;

}

