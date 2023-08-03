#include "Plants.h"

Plant::Plant(const std::string& nameTree, float heigthTree, const std::string& type, const std::string& color, int numFruits) :
	_nameTree{ nameTree }, _heigthTree{ heigthTree }, _type{ type }, _color{ color }, _numFruits{ numFruits } {
	fruitCount = _numFruits;
}

Plant::Plant(const std::string& nameTree, const std::string& type, const std::string& color) :
	_nameTree{ nameTree }, _type{ type }, _color{ color } { }

void Plant::ShowPlant() const
{
	std::cout << "NameTree: " << _nameTree << std::endl;
	std::cout << "Heigth Tree: " << _heigthTree << std::endl;
	std::cout << "Tree type: " << _type << std::endl; // Большойе Маленькое Среднее
	std::cout << "Color: " << _color << std::endl;
	std::cout << "Numbers of Fruits: " << _numFruits << std::endl;
}

Plant::~Plant()
{
	std::cout << this << " Destroid Plant \n";
}
