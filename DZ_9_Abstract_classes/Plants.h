#ifndef _PLANTS_H_
#define _PLANTS_H_
#include<iostream>
#include<string>

#include"Harvest.h"
#include"Source.h"
#include"Plants.h"

#include <iostream>

class Calculator
{
private:
	int m_Data;
public:
   
    friend std::ostream& operator<< (std::ostream& out, int data);
    friend std::istream& operator>> (std::istream& in, int data);
};

std::ostream& operator<< (std::ostream& out, int data)
{

    return out;
}

std::istream& operator>> (std::istream& in, Calculator& cal)
{
    in >> cal.m_Data;

    return in;
}

//Если в классе есть 1 виртуальная функция то он является абстрактным!!! (Все фуНКции переписываем в наследниках)

class Plant
{
private:
	std::string _nameTree;
	float _heigthTree;
	std::string _type;// Большойе Маленькое Среднее
	std::string _color;
	int _numFruits;
public:
	int fruitCount = 0;
	Plant(const std::string& nameTree, float heigthTree, const std::string& type, const std::string& color, int numFruits);	
	Plant(const std::string& nameTree, const std::string& type, const std::string& color);	//Для не плодоносных Деревьев
	virtual void ShowPlant() const;
	virtual ~Plant();	
	virtual Harvest* harvestFruit() = 0; // Чистая виртуальная функция (Должна быть обязательно Вызвана в классах наследников)
};


#endif // !_PLANTS_H_
