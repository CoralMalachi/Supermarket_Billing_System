#include "Menager.h"
#include "Item.h"


void menu(Menager* m) {
	int run = 1;
	//string s;
	char c;
	
	do
	{
		cout << "\n			 Welcome to Supermarket Billing System C++ Project                     " << endl;

		printf("\n___________________________________________________________________________________\n");
		printf("|Option Number|                            Description                               |\n");
		printf("|_______________|____________________________________________________________________|\n");
		printf("|       1       |Add Item to shop                                             |\n");
		printf("|       2       |Print All Items in shop                                                    |\n");
		printf("|       3       |                                            |\n");
		printf("|       4       |                                      |\n");
		printf("|       0       |Exit program                                                        |\n");
		printf("|_______________|____________________________________________________________________|\n");
		printf("\nWhat do you want to do?\n\n");

		cin >> c;		

		switch (c)
		{
		case '0':
			//free allocated memory end terminate program
			run = 0;
			break;
		case '1':
			m->AddItem();
			break;
		case '2':
			m->printAllItems();
			break;
		case '3':
			
			break;
		case '4':
			
			break;

		default:
			printf("\nERROR: You did not enter a valid input. Please try again.\n\n");
			break;
		}

	} while (run != 0);
}
int main(void) {
	
	Menager m = Menager();
	menu(&m);

	
	
	return 0;

}