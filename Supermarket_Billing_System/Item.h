#pragma once
#include <iostream>
using namespace std;
#define MAX 25 
class Item
{
public:

	unsigned int m_number;
	char name[MAX];
	float m_price;
	unsigned int m_amount;
	Item();
	
	~Item();
	void printItem();
	void CreateItem();

private:


	
};

