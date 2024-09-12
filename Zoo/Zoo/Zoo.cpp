#include <iostream>
#include "Zoo.h"

#pragma once


void main() {
	Owl owl("Cage 2", 3);
	Wolf wolf("Cage 15", 6);
	Tiger tiger("Cage 27", 10);

	std::cout << "OWL Name: " << owl.getName() << std::endl << "Age: " << owl.getAge() << std::endl << "Lives in: " << owl.getPlace() << std::endl;
	owl.getVoice();
	std::cout << std::endl;
	std::cout << "WOLF Name: " << wolf.getName() << std::endl << "Age: " << wolf.getAge() << std::endl << "Lives in: " << wolf.getPlace() << std::endl;
	wolf.getVoice();
	std::cout << std::endl;
	std::cout << "TIGER Name: " << tiger.getName() << std::endl << "Age: " << tiger.getAge() << std::endl << "Lives in: " << tiger.getPlace() << std::endl;
	tiger.getVoice();
	std::cout << std::endl;

	std::string temp_place = owl.getPlace();
	owl.moveTo(wolf.getPlace());
	tiger.moveTo(temp_place);

	std::cout << owl.getName() << " now lives in: " << owl.getPlace() << std::endl;
	std::cout << tiger.getName() << " now lives in: " << tiger.getPlace() << std::endl;
}