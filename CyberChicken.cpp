/**
*	@file : CyberChicken.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Implements the methods outlined in CyberChicken.h.
*/
#include "CyberChicken.h"

CyberChicken::CyberChicken() {

setName("Cyber Chicken");
setSound("Resistance is futile");

}

int CyberChicken::getCyberEggs() const {

return(getEggs());
}

void CyberChicken::setCyberEggs(int eggs) {

setEggs(eggs);

}
