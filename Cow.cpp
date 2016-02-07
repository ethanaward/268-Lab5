/**
*	@file : Cow.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Implements the methods outlined in Cow.h.
*/
#include "Cow.h"

Cow::Cow() {

setName("Cow");
setSound("Moo");

}

double Cow::getMilkProduced() const {

return(m_milkProduced);

}

void Cow::setMilkProduced(double gallons) {

if(gallons > 0) {
	m_milkProduced = gallons;
}

else {
	m_milkProduced = 0;
}

}

