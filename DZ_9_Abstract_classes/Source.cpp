#include "Source.h"



Apple::Apple(const std::string name, float weigth, const std::string colorHar)
	: Harvest(name, weigth, colorHar)
{
	std::cout << this << " Apple object created\n";
}
Apple::~Apple()
{
	std::cout << this << " Destroid Apple \n";
}



Pear::Pear(const std::string name, float weigth, const std::string colorHar)
	: Harvest(name, weigth, colorHar)
{
	std::cout << this << " Pear object created\n";
}
Pear::~Pear()
{
	std::cout << this << " Destroid Pear \n";
}



Cherry::Cherry(const std::string name, float weigth, const std::string colorHar)
	: Harvest(name, weigth, colorHar)
{
	std::cout << this << " Cherry object created\n";
}
Cherry::~Cherry()
{
	std::cout << this << " Destroid Cherry \n";
}



Pine::Pine(const std::string name, float weigth, const std::string colorHar)
	: Harvest(name, weigth, colorHar)
{
	std::cout << this << " Pine object created\n";
}
Pine::~Pine()
{
	std::cout << this << " Destroid Pine \n";
}



Spruce::Spruce(const std::string name, float weigth, const std::string colorHar)
	: Harvest(name, weigth, colorHar)
{
	std::cout << this << " Spruce object created\n";
}
Spruce::~Spruce()
{
	std::cout << this << " Destroid Spruce \n";
}
