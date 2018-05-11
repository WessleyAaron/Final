#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int userRepeat;




int soda()
{


	return 0;
}

int frozen()
{
	int frozenChoice, frozenRepeat;

	do
	{
		cout << "What would you like from frozen? [1] Fries, [2] Pizza, [3] Ice Cream: ";
		cin >> frozenChoice;

		if (frozenChoice == 1)
		{

		}

		else if (frozenChoice == 2)
		{

		}

		else if (frozenChoice == 3)
		{

		}

		cout << "Would you like to buy anything else from frozen? [1] Yes or [2] No: ";
		cin >> frozenRepeat;
	}

	while (frozenRepeat != 2);

	return 0;
}

int deli()
{
	int deliRepeat, meatChoice;
	double meatAmount;
	double ham = 5.99;
	double salami = 6.99;
	double turkey = 5.99;
	double pounds = 1.99;
	double totalMeat = 0.00;

	
		cout << "What would you like from the Deli? [1] Ham, [2] Salami, [3] Turkey: ";
		cin >> meatChoice;

		cout << "\n";

		if (meatChoice == 1)
		{
			cout << "How many pounds of ham would you like? ";
			cin >> meatAmount;

			cout << "\n";

			totalMeat += ham + (meatAmount * pounds);
		}

		else if (meatChoice == 2)
		{
			cout << "How many pounds of salami would you like? ";
			cin >> meatAmount;

			cout << "\n";

			totalMeat += salami + (meatAmount * pounds);
		}

		else if (meatChoice == 3)
		{
			cout << "How many pounds of turkey would you like? ";
			cin >> meatAmount;

			cout << "\n";

			totalMeat += turkey + (meatAmount * pounds);
		}

		cout << "Would you like to buy anything else? [1] Yes or [2] No: ";
		cin >> deliRepeat;

		cout << "\n";
	

	return 0;
}

int storeFront()
{
	int userChoice;

	do
	{
		cout << "Welcome to a not Wal-Mart clone\n" << endl;
		cout << "Where would you like to go?" << endl;
		cout << "\n[1] Deli, [2] Frozen aisles, [3] Soda aisle, [4] Check Out: ";
		cin >> userChoice;

		cout << "\n";

		if (userChoice == 1)
		{
			deli();
		}

		else if (userChoice == 2)
		{
			frozen();
		}

		else if (userChoice == 3)
		{
			soda();
		}

		else if (userChoice == 4)
		{
			main();
		}
	}

	while (userRepeat != 2);

	//leave store
	return 0;
}