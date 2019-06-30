#include "Item.h"
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include <conio.h>
#define getch() _getch()


Item::Item()
{
	
}

Item::~Item()
{
}

void Item::printItem()
{
	
	
	cout << "ITEM NO: "<<m_number<<endl;
	
	cout << "NAME" << name << endl;
	
	cout << "PRICE" << m_price << endl;
	
	cout << "QUANTITY" << m_amount << endl;
	
}

void Item::CreateItem()
{
	cout << "\nPlease Enter The Product No. of The Product : ";
	cin >> m_number;
	getch();
	cout << "\n\nPlease Enter The Name of The Product : ";
	//getch();
	cin >> name;
	//fgets(name, MAX, stdin);
	cout << "\nPlease Enter The Price of The Product : ";
	cin >> m_price;
	cout << "\nPlease Enter The amount : ";
	cin >> m_amount;
}


