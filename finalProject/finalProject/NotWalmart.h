#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int userRepeat;
double totalMeat = 0.00;
double totalSoda = 0.00;
double totalFrozen = 0.00;

int CheckOut()
{
	double totalWalMart;

	cout << fixed << showpoint;
	cout << setprecision(2);

	totalWalMart = totalMeat + totalSoda + totalFrozen;

	cout << "That will cost you $" << totalWalMart << endl;

	cout << "\n";

	if (totalWalMart > userBalanceMoney)
	{
		cout << "I'm sorry, but you don't have enough money to buy all of this\n" << endl;

		cout << "You're going to have to put those items back\n" << endl;
	}

	else if (totalWalMart <= userBalanceMoney)
	{
		userBalanceMoney = userBalanceMoney - totalWalMart;
	}

	main();

	return 0;
}

int soda()
{
	int sodaChoice, sodaRepeat;
	int container, containerSize;
	int canNumber, bottleNumber;
	double can12Price = 10.99;
	double can24Price = 13.99;
	double bottle6Price = 11.99;
	double twoLiterPrice = 14.99;

	do
	{
		cout << "Which soda would you like? [1] Pepsi, [2] Mountain Dew, [3] Sprite: ";
		cin >> sodaChoice;

		cout << "\n";

		if (sodaChoice == 1)
		{
			cout << "[1] Cans or [2] Bottles?: ";
			cin >> container;

			cout << "\n";

			if (container == 1)
			{
				cout << "[1] 12 pack or [2] 24 pack?: ";
				cin >> containerSize;

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> canNumber;

					totalSoda += canNumber * can12Price;
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> canNumber;

					totalSoda += canNumber * can24Price;
				}
			}

			else if (container == 2)
			{
				cout << "[1] 6 pack or [2] 2 liter?: ";
				cin >> containerSize;

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber;

					totalSoda += bottleNumber * bottle6Price;
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber;

					totalSoda += bottleNumber * twoLiterPrice;
				}
			}
		}

		else if (sodaChoice == 2)
		{
			cout << "[1] Cans or [2] Bottles?: ";
			cin >> container;

			cout << "\n";

			if (container == 1)
			{
				cout << "[1] 12 pack or [2] 24 pack?: ";
				cin >> containerSize;

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> canNumber;

					totalSoda += canNumber * can12Price;
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> canNumber;

					totalSoda += canNumber * can24Price;
				}
			}

			else if (container == 2)
			{
				cout << "[1] 6 pack or [2] 2 liter?: ";
				cin >> containerSize;

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber;

					totalSoda += bottleNumber * bottle6Price;
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber;

					totalSoda += bottleNumber * twoLiterPrice;
				}
			}
		}

		else if (sodaChoice == 3)
		{
			cout << "[1] Cans or [2] Bottles?: ";
			cin >> container;

			cout << "\n";

			if (container == 1)
			{
				cout << "[1] 12 pack or [2] 24 pack?: ";
				cin >> containerSize;

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> canNumber;

					totalSoda += canNumber * can12Price;
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> canNumber;

					totalSoda += canNumber * can24Price;
				}
			}

			else if (container == 2)
			{
				cout << "[1] 6 pack or [2] 2 liter?: ";
				cin >> containerSize;

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber;

					totalSoda += bottleNumber * bottle6Price;
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber;

					totalSoda += bottleNumber * twoLiterPrice;
				}
			}
		}

		cout << "\n";

		cout << "Would you like to buy anything else from soda? [1] Yes or [2] No: ";
		cin >> sodaRepeat;

		cout << "\n";
	}

	while (sodaRepeat == 1);

	return 0;
}

int frozen()
{
	int frozenChoice, frozenRepeat;
	int friesChoice, bagNumber;
	int pizzaChoice, pizzaNumber;
	int iceCreamChoice, tubNumber;
	double steakFriesPrice = 7.99;
	double curlyFriesPrice = 8.99;
	double cheesePizzaPrice = 9.99;
	double pepperoniPizzaPrice = 11.99;
	double sausagePizzaPrice = 13.99;
	double vanillaPrice = 6.99;
	double chocolatePrice = 8.99;
	double CNCPrice = 10.99;

	do
	{
		cout << "What would you like from frozen? [1] Fries, [2] Pizza, [3] Ice Cream: ";
		cin >> frozenChoice;

		cout << "\n";

		if (frozenChoice == 1)
		{
			cout << "What kind of fries? [1] steak fries or [2] curly fries: ";
			cin >> friesChoice;

			cout << "\n";

			if (friesChoice == 1)
			{
				cout << "How many bags of steak fries?: ";
				cin >> bagNumber;

				totalFrozen += bagNumber * steakFriesPrice;
			}

			else if (friesChoice == 2)
			{
				cout << "How many bags of curly fries?: ";
				cin >> bagNumber;

				totalFrozen += bagNumber * curlyFriesPrice;
			}
		}

		else if (frozenChoice == 2)
		{
			cout << "What kind of pizza would you like? [1] cheese, [2] pepperoni, [3] sausage: ";
			cin >> pizzaChoice;

			cout << "\n";

			if (pizzaChoice == 1)
			{
				cout << "How many cheese pizzas would you like?: ";
				cin >> pizzaNumber;

				totalFrozen += pizzaNumber * cheesePizzaPrice;
			}

			else if (pizzaChoice == 2)
			{
				cout << "How many pepperoni pizzas would you like?: ";
				cin >> pizzaNumber;

				totalFrozen += pizzaNumber * pepperoniPizzaPrice;
			}

			else if (pizzaChoice == 3)
			{
				cout << "How many sausage pizzas would you like?: ";
				cin >> pizzaNumber;

				totalFrozen += pizzaNumber * sausagePizzaPrice;
			}
		}

		else if (frozenChoice == 3)
		{
			cout << "What kind of ice cream? [1] vanilla, [2] chocolate, [3] cookies n' cream: ";
			cin >> iceCreamChoice;

			cout << "\n";

			if (iceCreamChoice == 1)
			{
				cout << "How many tubs of vanilla ice cream would you like?: ";
				cin >> tubNumber;

				totalFrozen += tubNumber * vanillaPrice;
			}

			else if (iceCreamChoice == 2)
			{
				cout << "How many tubs of chocolate ice cream would you like?: ";
				cin >> tubNumber;

				totalFrozen += tubNumber * chocolatePrice;
			}

			else if (iceCreamChoice == 3)
			{
				cout << "How many tubs of cookies n' cream ice cream would you like?: ";
				cin >> tubNumber;

				totalFrozen += tubNumber * CNCPrice;
			}
		}

		cout << "\n";

		cout << "Would you like to buy anything else from frozen? [1] Yes or [2] No: ";
		cin >> frozenRepeat;

		cout << "\n";
	}

	while (frozenRepeat == 1);

	return 0;
}

int deli()
{
	int deliRepeat, meatChoice;
	double meatAmount;
	double hamPerPound = 2.99;
	double salamiPerPound = 3.99;
	double turkeyPerPound = 2.99;

	do
	{
		cout << "What would you like from the Deli? [1] Ham, [2] Salami, [3] Turkey: ";
		cin >> meatChoice;

		cout << "\n";

		if (meatChoice == 1)
		{
			cout << "How many pounds of ham would you like? ";
			cin >> meatAmount;

			cout << "\n";

			totalMeat += hamPerPound * meatAmount;
		}

		else if (meatChoice == 2)
		{
			cout << "How many pounds of salami would you like? ";
			cin >> meatAmount;

			cout << "\n";

			totalMeat += salamiPerPound * meatAmount;
		}

		else if (meatChoice == 3)
		{
			cout << "How many pounds of turkey would you like? ";
			cin >> meatAmount;

			cout << "\n";

			totalMeat += turkeyPerPound * meatAmount;
		}

		cout << "Would you like to buy anything else from deli? [1] Yes or [2] No: ";
		cin >> deliRepeat;

		cout << "\n";
	}

	while (deliRepeat == 1);

	return 0;
}

int storeFront()
{
	int userChoice;

	do
	{
		cout << "Welcome to generic grocery store\n" << endl;
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
			CheckOut();
		}
	}

	while (userRepeat != 2);

	//leave store
	return 0;
}