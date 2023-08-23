
#ifndef _SOURCE_H_
#define _SOURCE_H_
#include"Harvest.h"


class Apple : public Harvest
{
public:
	Apple(const std::string name, float weigth, const std::string colorHar);
	~Apple() override;	
};


class Pear : public Harvest
{
public:
	Pear(const std::string name, float weigth, const std::string colorHar); 
	~Pear() override;	
};

class Cherry : public Harvest
{
public:
	Cherry(const std::string name, float weigth, const std::string colorHar);
	~Cherry() override;
};





class Pine : public Harvest
{
public:
	Pine(const std::string name, float weigth, const std::string colorHar);
	~Pine() override;
};

class Spruce : public Harvest
{
public:
	Spruce(const std::string name, float weigth, const std::string colorHar);
	~Spruce() override;
	
};



#endif // !_SOURCE_H_