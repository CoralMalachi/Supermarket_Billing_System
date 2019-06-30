#include "Menager.h"

void Menager::AddItem()
{
	Item t = Item();
	t.CreateItem();
	// Creation of fstream class object 
	ofstream outfile;
	string file_name = shop_name + ".dat";
	outfile.open(file_name, ios::binary | ios::app);
	outfile.write((char*)& t, sizeof(Item));
	outfile.close();
	cout << "\n\nThe Product Has Been Created...****** \n";
}

void Menager::printAllItems()
{
	Item amt ;
	string file_name = shop_name + ".dat";
	ifstream fin;
	fin.open(file_name, ios::binary);
	if (!fin)
	{
		cout << "\n\nFile Not Found...";
		return;
	}
	fin.seekg(0);
	
	while (!fin.eof())
	{
		fin.read((char*)& amt, sizeof(amt));
		if (!fin.eof())
		{
			amt.printItem();
			
		}
		
	}
	fin.close();
}

Menager::~Menager()
{
}
