#include <iostream>
#include <iomanip>

using namespace std;

int userRepeat;
double totalMeat = 0.00;
double totalSoda = 0.00;
double totalFrozen = 0.00;

int CheckOut() //where you buy the items you chose
{
	double totalWalMart;

	cout << fixed << showpoint;
	cout << setprecision(2); //makes it so each money display shows 2 decimal points

	totalWalMart = totalMeat + totalSoda + totalFrozen; //totals from the deli, frozen, and soda functions are all added here

	cout << "That will cost you $" << totalWalMart << endl; //shows your total from all the parts of the store

	cout << "\n";

	if (totalWalMart > userBalanceMoney) //shows when you dont have enough money in your bank account to buy everything
	{
		color(12);

		cout << "I'm sorry, but you don't have enough money to buy all of this\n" << endl;

		cout << "You're going to have to put those items back\n" << endl;
	}

	else if (totalWalMart <= userBalanceMoney) //takes the money out of your bank account if you have enough
	{
		userBalanceMoney = userBalanceMoney - totalWalMart;

		color(10);

		cout << "Thanks for shopping\n" << endl;
	}

	totalFrozen = 0.00; //resets the total money spent to $0.00
	totalSoda = 0.00;
	totalMeat = 0.00;

	main(); //takes you back to the main function

	return 0;
}

int soda() //where you choose what kind of soda you'd like
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
		system("cls");

		color(13);

		cout << "Which soda would you like? [1] Pepsi, [2] Mountain Dew, [3] Sprite: ";
		cin >> sodaChoice; //user chooses which soda they'd like

		cout << "\n";

		if (sodaChoice == 1)
		{
			cout << "[1] Cans or [2] Bottles?: ";
			cin >> container; //user chooses between cans or bottles

			cout << "\n";

			if (container == 1)
			{
				cout << "[1] 12 pack or [2] 24 pack?: ";
				cin >> containerSize; //user chooses between 12 packs and 24 packs

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> canNumber; //user chooses how many packs of cans they'd like

					totalSoda += canNumber * can12Price; //prices are determined and they are added to your total for this function
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> canNumber; //user chooses how many packs of cans they'd like

					totalSoda += canNumber * can24Price; //prices are determined and they are added to your total for this function
				}
			}

			else if (container == 2)
			{
				cout << "[1] 6 pack or [2] 2 liter?: ";
				cin >> containerSize; //user chooses between a 6 pack of bottles or a 2 liter

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber; //user chooses how many bottles they'd like

					totalSoda += bottleNumber * bottle6Price; //prices are determined and they are added to your total for this function
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber; //user chooses how many bottles they'd like

					totalSoda += bottleNumber * twoLiterPrice; //prices are determined and they are added to your total for this function
				}
			}
		}

		else if (sodaChoice == 2)
		{
			cout << "[1] Cans or [2] Bottles?: ";
			cin >> container; //user chooses between cans or bottles

			cout << "\n";

			if (container == 1)
			{
				cout << "[1] 12 pack or [2] 24 pack?: ";
				cin >> containerSize; //user chooses between 12 packs and 24 packs

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> canNumber; //user chooses how many packs of cans they'd like

					totalSoda += canNumber * can12Price; //prices are determined and they are added to your total for this function
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> canNumber; //user chooses how many packs of cans they'd like

					totalSoda += canNumber * can24Price; //prices are determined and they are added to your total for this function
				}
			}

			else if (container == 2)
			{
				cout << "[1] 6 pack or [2] 2 liter?: ";
				cin >> containerSize; //user chooses between a 6 pack of bottles or a 2 liter

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber; //user chooses how many bottles they'd like

					totalSoda += bottleNumber * bottle6Price; //prices are determined and they are added to your total for this function
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber; //user chooses how many bottles they'd like

					totalSoda += bottleNumber * twoLiterPrice; //prices are determined and they are added to your total for this function
				}
			}
		}

		else if (sodaChoice == 3)
		{
			cout << "[1] Cans or [2] Bottles?: ";
			cin >> container; //user chooses between cans or bottles

			cout << "\n";

			if (container == 1)
			{
				cout << "[1] 12 pack or [2] 24 pack?: ";
				cin >> containerSize; //user chooses between 12 packs and 24 packs

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> canNumber; //user chooses how many packs of cans they'd like

					totalSoda += canNumber * can12Price; //prices are determined and they are added to your total for this function
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> canNumber; //user chooses how many packs of cans they'd like

					totalSoda += canNumber * can24Price; //prices are determined and they are added to your total for this function
				}
			}

			else if (container == 2)
			{
				cout << "[1] 6 pack or [2] 2 liter?: ";
				cin >> containerSize; //user chooses between a 6 pack of bottles or a 2 liter

				cout << "\n";

				if (containerSize == 1)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber; //user chooses how many bottles they'd like

					totalSoda += bottleNumber * bottle6Price; //prices are determined and they are added to your total for this function
				}

				else if (containerSize == 2)
				{
					cout << "How many would you like?: ";
					cin >> bottleNumber; //user chooses how many bottles they'd like

					totalSoda += bottleNumber * twoLiterPrice; //prices are determined and they are added to your total for this function
				}
			}
		}

		cout << "\n";

		cout << "Would you like to buy anything else from soda? [1] Yes or [2] No: ";
		cin >> sodaRepeat; //user chooses if they want more soda or not (takes them back to the storefront if they're done)

		cout << "\n";
	}

	while (sodaRepeat == 1);

	return 0;
}

int frozen() //where you choose what frozen items you'd like
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
		system("cls");

		color(6);

		cout << "What would you like from frozen? [1] Fries, [2] Pizza, [3] Ice Cream: ";
		cin >> frozenChoice; //user chooses what they want from frozen

		cout << "\n";

		if (frozenChoice == 1)
		{
			cout << "What kind of fries? [1] steak fries or [2] curly fries: ";
			cin >> friesChoice; //user chooses between steak fries and curly fries

			cout << "\n";

			if (friesChoice == 1)
			{
				cout << "How many bags of steak fries?: ";
				cin >> bagNumber; //user chooses how many bags of fries they'd like

				totalFrozen += bagNumber * steakFriesPrice; //prices are determined and they are added to your total for this function
			}

			else if (friesChoice == 2)
			{
				cout << "How many bags of curly fries?: ";
				cin >> bagNumber; //user chooses how many bags of fries they'd like

				totalFrozen += bagNumber * curlyFriesPrice; //prices are determined and they are added to your total for this function
			}
		}

		else if (frozenChoice == 2)
		{
			cout << "What kind of pizza would you like? [1] cheese, [2] pepperoni, [3] sausage: ";
			cin >> pizzaChoice; //user chooses what kind of pizza they'd like

			cout << "\n";

			if (pizzaChoice == 1)
			{
				cout << "How many cheese pizzas would you like?: ";
				cin >> pizzaNumber; //user chooses how many pizzas they'd like

				totalFrozen += pizzaNumber * cheesePizzaPrice; //prices are determined and they are added to your total for this function
			}

			else if (pizzaChoice == 2)
			{
				cout << "How many pepperoni pizzas would you like?: ";
				cin >> pizzaNumber; //user chooses how many pizzas they'd like

				totalFrozen += pizzaNumber * pepperoniPizzaPrice; //prices are determined and they are added to your total for this function
			}

			else if (pizzaChoice == 3)
			{
				cout << "How many sausage pizzas would you like?: ";
				cin >> pizzaNumber; //user chooses how many pizzas they'd like

				totalFrozen += pizzaNumber * sausagePizzaPrice; //prices are determined and they are added to your total for this function
			}
		}

		else if (frozenChoice == 3)
		{
			cout << "What kind of ice cream? [1] vanilla, [2] chocolate, [3] cookies n' cream: ";
			cin >> iceCreamChoice; //user chooses what kind of ice cream they'd like

			cout << "\n";

			if (iceCreamChoice == 1)
			{
				cout << "How many tubs of vanilla ice cream would you like?: ";
				cin >> tubNumber; //user chooses how many tubs of ice cream they'd like

				totalFrozen += tubNumber * vanillaPrice; //prices are determined and they are added to your total for this function
			}

			else if (iceCreamChoice == 2)
			{
				cout << "How many tubs of chocolate ice cream would you like?: ";
				cin >> tubNumber; //user chooses how many tubs of ice cream they'd like

				totalFrozen += tubNumber * chocolatePrice; //prices are determined and they are added to your total for this function
			}

			else if (iceCreamChoice == 3)
			{
				cout << "How many tubs of cookies n' cream ice cream would you like?: ";
				cin >> tubNumber; //user chooses how many tubs of ice cream they'd like

				totalFrozen += tubNumber * CNCPrice; //prices are determined and they are added to your total for this function
			}
		}

		cout << "\n";

		cout << "Would you like to buy anything else from frozen? [1] Yes or [2] No: ";
		cin >> frozenRepeat; //user chooses if they want more frozen items or not (takes them back to the storefront if they're done)

		cout << "\n";
	}

	while (frozenRepeat == 1);

	return 0;
}

int deli() //where you buy your meat
{
	int deliRepeat, meatChoice;
	double meatAmount;
	double hamPerPound = 2.99;
	double salamiPerPound = 3.99;
	double turkeyPerPound = 2.99;

	do
	{
		color(8);

		system("cls");

		cout << "What would you like from the Deli? [1] Ham, [2] Salami, [3] Turkey: ";
		cin >> meatChoice; //user chooses what kind of meat they want

		cout << "\n";

		if (meatChoice == 1)
		{
			cout << "How many pounds of ham would you like? ";
			cin >> meatAmount; //user enters how many pounds of meat they'd like

			cout << "\n";

			totalMeat += hamPerPound * meatAmount; //prices are determined and they are added to your total for this function
		}

		else if (meatChoice == 2)
		{
			cout << "How many pounds of salami would you like? ";
			cin >> meatAmount; //user enters how many pounds of meat they'd like

			cout << "\n";

			totalMeat += salamiPerPound * meatAmount; //prices are determined and they are added to your total for this function
		}

		else if (meatChoice == 3)
		{
			cout << "How many pounds of turkey would you like? ";
			cin >> meatAmount; //user enters how many pounds of meat they'd like

			cout << "\n";

			totalMeat += turkeyPerPound * meatAmount; //prices are determined and they are added to your total for this function
		}

		cout << "Would you like to buy anything else from deli? [1] Yes or [2] No: ";
		cin >> deliRepeat; //user chooses if they want more meat or not (takes them back to the storefront if they're done)

		cout << "\n";
	}

	while (deliRepeat == 1);

	return 0;
}

int storeFront() //first thing that shows when you enter the store
{
	int userChoice;

	do
	{
		system("cls");
		
		color(3);

		cout << "Welcome to generic grocery store\n" << endl;
		cout << "Where would you like to go?" << endl;
		cout << "\n[1] Deli, [2] Frozen aisles, [3] Soda aisle, [4] Check Out: ";
		cin >> userChoice; //user chooses where they want to go

		cout << "\n";

		switch (userChoice)
		{
		case 1:
			deli(); //runs the deli function
			break;
		case 2:
			frozen(); //runs the forzen function
			break;
		case 3:
			soda(); //runs the soda function
			break;
		case 4:
			CheckOut(); //runs the check out function
			break;
		}
	}

	while (userRepeat != 2);

	//leave store
	return 0;
}