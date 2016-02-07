/**
*	@file : main.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Allows the user to create animals with desired values and add them to an animal pen as long as necessary, then releases them all, displays any specific messages they may have, displays their goodbye message, and displays how many gallons of milk and eggs the farm made.
*/
#ifndef MAIN_CPP
#define MAIN_CPP

#include "StackInterface.h"
#include "FarmAnimal.h"
#include "AnimalPen.h"
#include "Cow.h"
#include "Chicken.h"
#include "CyberChicken.h"
#include <iostream>

void goodbyeMessage(const FarmAnimal& animal) {

std::cout << "Upon release the " << animal.getName() << " said " << animal.getSound() << ".\n";

}

int main() {

AnimalPen* pen = new AnimalPen();
char done = ' ';
int choice = 0;
double value = 0.0;
double gallons = 0.0;
int eggs = 0;

while(done != 'y') {
	std::cout << "\nSelect an animal to add to the pen:\n" 
	<< "1.) Cow (produces milk)\n"
	<< "2.) Chicken (cannot lay eggs)\n"
	<< "3.) Cyber Chicken (seems dangerous, but lays eggs)\n"
	<< "--------------------------------------------------\n"
	<< "choice: ";

	std::cin >> choice;

	if(choice == 1) {
		std::cout << "How many gallons of milk did this cow produce?:";
		std::cin >> value;
		Cow* cow = new Cow();
		cow->setMilkProduced(value);
		pen->addAnimal(cow);
		delete cow;
	}
	
	else if(choice == 2) {
		std::cout << "Add an eggless chicken to the pen? Ok. You're the boss.\n";
		Chicken* chicken = new Chicken();
		pen->addAnimal(chicken);
		delete chicken;
	}
	
	else if(choice == 3) {
		std::cout << "How many eggs did this cyber chicken produce?:";
		std::cin >> value;
		CyberChicken* cyber = new CyberChicken();
		cyber->setCyberEggs(value);
		pen->addAnimal(cyber);
		delete cyber;
	}

	std::cout << "\nDone adding animals? (y/n):";
	std::cin >> done;
}

std::cout << "\nReleasing all animals!\n"
	<< "-------------------------\n";

while(!pen->isPenEmpty()) {

FarmAnimal* temp = pen->peekAtNextAnimal();

	if(temp->getName() == "Cow") {
		Cow* cowTemp = static_cast<Cow*>(temp);
		std::cout << "This cow produced " << cowTemp->getMilkProduced()
		<< " gallons of milk.\n";
		gallons = gallons + cowTemp->getMilkProduced();
	}

	else if(temp->getName() == "Chicken") {
		Chicken* chickenTemp = static_cast<Chicken*>(temp);
		std::cout << "Chicken unable to lay eggs. Perhaps cybernetic implants will help?\n";
	}

	else if (temp->getName() == "Cyber Chicken") {
		CyberChicken* cyberTemp = static_cast<CyberChicken*>(temp);
		std::cout << "This Cyber Chicken laid " << cyberTemp->getCyberEggs() << " cyber eggs. Humanity is in trouble.\n";
		eggs = eggs + cyberTemp->getCyberEggs();
	}
	
	goodbyeMessage(*(temp));
	pen->releaseAnimal();
	
}

	std::cout << "Your farm produced " << gallons << " gallons of milk and " << eggs << " eggs.";

delete pen;

};

#endif
