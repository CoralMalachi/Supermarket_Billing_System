#include "Item.h"
#include <fstream>
#include <string>
#pragma once
class Menager
{
public:
	string shop_name;

	void AddItem();
	void printAllItems();
	Menager()
	{
		cout << "Enter Shop name: ";
		
		cin >> this->shop_name;
	}
	~Menager();
private:

};

