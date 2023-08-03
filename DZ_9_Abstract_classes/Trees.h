
#ifndef _TREES_H_
#define _TREES_H_

#include"Plants.h"




class AppleTree : public Plant // Плодоносное
{
public:
	AppleTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits);		
	~AppleTree() override;
	void ShowPlant()const override;
	Harvest* harvestFruit()  override;	
};

class SpruceTree : public Plant // Ель не плодоносное
{
public:
	SpruceTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits);
	~SpruceTree() override;
	void ShowPlant()const override;
	Harvest* harvestFruit()  override;
};

class PineTree : public Plant // Сосна не плодоносное
{
public:
	PineTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits);
	~PineTree() override;
	void ShowPlant()const override;
	Harvest* harvestFruit()  override;
};

class CherryTree : public Plant // Плодоносное Ягоды
{
public:
	CherryTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits);		
	~CherryTree() override;
	void ShowPlant()const override;
	Harvest* harvestFruit()  override;	
};

class PearTree : public Plant // Плодоносное Груша
{
public:
	PearTree(const std::string nameTree, float heigthTree, const std::string type, const std::string& color, int numFruits);
	~PearTree() override;
	void ShowPlant()const override;
	Harvest* harvestFruit()  override;	
};



#endif // !_TREES_H_