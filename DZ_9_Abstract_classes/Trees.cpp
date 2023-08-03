#include "Trees.h"

AppleTree::AppleTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits)
	: Plant(nameTree, heigthTree, type, color, numFruits)
{
	std::cout << this << " AppleTree object created\n";
}
AppleTree::~AppleTree()
{
	std::cout << this << " Destroid AppleTree \n";
}
void AppleTree::ShowPlant() const
{
	Plant::ShowPlant();
	std::cout << " Fruit count: " << fruitCount << std::endl;
}
Harvest* AppleTree::harvestFruit()
{
	--fruitCount;
	return new Apple("Apple", 20.32, "Green");
}

SpruceTree::SpruceTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits)
	: Plant(nameTree, heigthTree, type, color, numFruits)
{
	std::cout << this << "SpruceTree object created\n";
}
SpruceTree::~SpruceTree()
{
	std::cout << this << " Destroid Plant \n";
}
void SpruceTree::ShowPlant() const
{
	Plant::ShowPlant();
	std::cout << " Infertile tree: " << fruitCount << std::endl;
}
Harvest* SpruceTree::harvestFruit()
{	
	return new Spruce(" SpruceTree", 6000, "Green");
}



PineTree::PineTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits)
	: Plant(nameTree, heigthTree, type, color, numFruits)
{
	std::cout << this << " Pine object created\n";
}
PineTree::~PineTree()
{
	std::cout << this << " Destroid Pine \n";
}
void PineTree::ShowPlant() const
{
	Plant::ShowPlant();
	std::cout << " Berries count: " << fruitCount << std::endl;
}
Harvest* PineTree::harvestFruit()
{
	
	return new Pine(" PineTree", 5800.82, "Green");
}



CherryTree::CherryTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits)
	: Plant(nameTree, heigthTree, type, color, numFruits)
{
	std::cout << this << " CherryTree object created\n";
}
CherryTree::~CherryTree()
{
	std::cout << this << " Destroid CherryTree \n";
}
void CherryTree::ShowPlant() const
{
	Plant::ShowPlant();
	std::cout << " Berries count: " << fruitCount << std::endl;
}
Harvest* CherryTree::harvestFruit()
{
	--fruitCount;
	return new Apple("Cherry", 100.2, "Red");
}


PearTree::PearTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits)
	: Plant(nameTree, heigthTree, type, color, numFruits)
{
	std::cout << this << "PearTree object created\n";
}
PearTree::~PearTree()
{
	std::cout << this << " Destroid PearTree \n";
}
void PearTree::ShowPlant() const
{
	Plant::ShowPlant();
	std::cout << " No fruit count: " << fruitCount << std::endl;
}
Harvest* PearTree::harvestFruit()
{
	--fruitCount;
	return new Pear("Pear",200 , "Yellow");
}
