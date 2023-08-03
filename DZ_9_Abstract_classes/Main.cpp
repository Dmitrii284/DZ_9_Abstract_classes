#include"Plants.h"
#include"Harvest.h"
#include"Source.h"
#include"Trees.h"


/*
Наследование - абстрактные классы
Задание
Cоздать базовые классы для растений(Plants) и плодов(Harvest) Класс плода должен
предоставлять возможность пользователю:
узнавать своё название(задаётся при создании)
узнавать свой вес и цвет(также можно задать при создании)
Базовый класс растения должен
знать какой у него размер(большой, маленький, средний),
цвет,
сколько на нём может быть плодов.
Создайте конкретных наследников для класса растения. Пример (яблоня, груша, малина,
ежевика). Которые связаны со своими наследниками класса плод и которые возвращают
плоды пока они есть на дереве через виртуальный метод базового класса (модель паттерна
фабричный метод)
В функции main продемонстрировать возможность работы с классами.
``` задание сдаётся в виде текстового документа с иллюстрациями либо в виде файла -
изображения диаграммы, с пояснениям
*/

int main()
{
	AppleTree tree("Apple Tree", 300, " Average", "Green", 20);
	tree.ShowPlant();
	Harvest* apple = tree.harvestFruit();
	apple->ShowHarvest();
	delete apple;

	PearTree P_tree("Pear Tree", 200, " Large", "Yellow", 860);
	P_tree.ShowPlant();
	Harvest* pear = P_tree.harvestFruit();
	pear->ShowHarvest();
	delete pear;

	PineTree Pin_tree("Pine Tree",5000, " High", "Green",0);
	Pin_tree.ShowPlant();
	Harvest* pine = P_tree.harvestFruit();
	pine->ShowHarvest();
	delete pine;

	/*AppleTree tree("Apple Tree", 50, " Average", "Green", 20);
	tree.ShowPlant();
	Harvest* apple = tree.harvestFruit();
	apple->ShowHarvest();
	delete apple;

	AppleTree tree("Apple Tree", 50, " Average", "Green", 20);
	tree.ShowPlant();
	Harvest* apple = tree.harvestFruit();
	apple->ShowHarvest();
	delete apple;*/

	return{};
}