#include "Harvest.h"

Harvest::Harvest(const std::string name, float weigth, const std::string colorHar)
	: _name{ name }, _weigth{ weigth }, _colorHar{ colorHar }
{
	std::cout << this << " Harvest object created\n";
}

Harvest::~Harvest()
{
	std::cout << this << " Destroid Plant \n";
}

void Harvest::ShowHarvest() const
{
	std::cout << "Fruit name: " << _name << std::endl;
	std::cout << "Heigth Tree: " << _weigth << std::endl;
	std::cout << "Color: " << _colorHar << std::endl;
}
