#include <iostream>
#include <iomanip>
#include "bank.h"
#include "NotWalmart.h"
#include "totallylegitperfectlylegaldarkalleynotblackmarketatallmarketplace.h"
#include <cstdlib>
using namespace std;

int main() //the main function of the program
{
	int userChoice;

	color(7);

	cout << "Welcome to Sim City\n" << endl; // first thing you see when you run the program
	cout << "Where would you like to go?" << endl;
	cout << "\n[1] Bank, [2] Not Wal-Mart, [3] Back alley shop, [4] Home: ";
	cin >> userChoice; //user chooses where they want to go

	cout << "\n";

	switch (userChoice)
	{
	case 1:
		mainbank(); //takes the user to the mainbank function
		break;
	case 2:
		storeFront(); //takes the user to the storeFront function
		break;
	case 3:
		blackmarketMain(); //takes the user to the blackmarketMain function
		break;
	case 4:
		cout << "Home just in time to be bitched at by the Missus because we forgot something\n" << endl;
		system("pause");
		exit(0); //ends the program
	default:
		main();
		break;
	}
}