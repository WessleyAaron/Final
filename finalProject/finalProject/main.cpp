#include <iostream>
#include <iomanip>
#include "bank.h"
#include "NotWalmart.h"
#include "totallylegitperfectlylegaldarkalleynotblackmarketatallmarketplace.h"
#include <cstdlib>
using namespace std;

int main()
{
	int userChoice;

	cout << "Welcome to Sim City\n" << endl;
	cout << "Where would you like to go?" << endl;
	cout << "\n[1] Bank, [2] Not Wal-Mart, [3] Back alley shop, [4] Home: ";
	cin >> userChoice;

	cout << "\n";

	if (userChoice == 1)
	{
		mainbank();
	}

	else if (userChoice == 2)
	{
		storeFront();
	}

	else if (userChoice == 3)
	{

	}

	else if (userChoice == 4)
	{
		cout << "Home just in time to be bitched at by the Missus because we forgot something" << endl;

		cout << "\n";
		system("pause");
		exit(0);
	}
	system("pause");
	return 0;
}