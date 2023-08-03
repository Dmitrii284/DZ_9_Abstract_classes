#ifndef _HARVEST_H_
#define _HARVEST_H_
#include"Plants.h"

class Harvest
{
private:
	std::string _name;
	float _weigth;
	std::string _colorHar;
public:

	Harvest(const std::string name, float weigth, const std::string colorHar);
	virtual ~Harvest();
	virtual	void ShowHarvest() const;	
};

#endif // !_HARVEST_H_