#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>
#include <random>
#include "time.h"
using namespace std;


int blackmarketitems(){
	string yesno;
	int itemid;
	int accountChoice;
	int itemsstock;
	double blackmarkettotal = 0.00;
	srand(time(NULL));
	string tempstock[6] {};
	double tempprice[6] {};
	int tempid[6]  {};
	string blackitems[20] = { "get out of jail free card", "soul of a forgotten god", "the universal truth", "the communist manifesto ", "the universal key","nuclear launch codes", "aegis of the immortal", "harold bat", "a plastic knife", "DDos software", "a cursed brick", "faulty blink dagger","rusted coin", "blackout glasses", "an endless pizza", "assorted drugs", "double edged sword", "a gun", "marble made in china","the endless bag"};
	double blackprices[20] = { 150.99, .99, 99999.99, 0.02, 555.99, 1.99, 666.66, 30.99, 77.99, 44.55, 20.99, 9000.98, 200.99, 15.99, 11.99, 49.99, 60.99, 777.77, 1.98, 300.99 };
	int blackids[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	for (int i = 0; i < 6; i++){
	 itemsstock = rand() % 20;
		cout << blackitems[itemsstock] << " : $ " << blackprices[itemsstock] << " item id " << i << endl;
		tempstock[itemsstock];
		tempprice[itemsstock];
		tempid[itemsstock];
	}
	cout << "Please enter the id of the item you would like to buy " << endl;
	cin >> itemid;
	blackmarkettotal += tempprice[itemid];
	cout << "you have purchased " << tempstock[itemid] << endl;
	cout << "That will cost you $" << blackmarkettotal << endl; //shows your total from all the parts of the store
	cout << "would you like to have a discription of what you purchased yes or no" << endl;
	cin >> yesno;
	if (yesno == "yes"){
		switch (tempid[itemid]){
		case 0:
			cout << "The Get out of jail free card:" << endl;
			cout << "allows you to be exempted of all crimes" << endl;
			cout << "must be handed to an authority figure or officer of some kind to work" << endl;
			cout << "only works once" << endl;
			break;
		case 1:
			cout << "The Soul of forgotten god:" << endl;
			cout << "The soul of a god that has left the minds of all beings" << endl;
			cout << "Completely worthless" << endl;
			break;
		case 2:
			cout << "The universal truth:" << endl;
			cout << "The truth of the universe that, once known, will grant unlimited knowledge of past, present, and future" << endl;
			cout << "(Hint: its 42)" << endl;
			break;
		case 3:
			cout << "The Communest Manifesto:" << endl;
			cout << "Once read from cover to cover, it'll make whatever country" << endl;
			cout << "you live in a communist nation" << endl;
			break;
		case 4:
			cout << "The universal key:" << endl;
			cout << "Key that will open any door, regardless of it existing or not" << endl;
			cout << "Pretty self explanatory, dumbass" << endl;
			break;
		case 5:
			cout << "Nuclear launch codes:" << endl;
			cout << "if you don't know what these are, why did you buy them?" << endl;
			break;
		case 6:
			cout << "Aegis of the immortal:" << endl;
			cout << "Must be on your person at all times. Will resurrect you one time only" << endl;
			break;
		case 7:
			cout << "Harold Bat:" << endl;
			cout << "a bat made for the sole purpose of purifying all corruption" << endl;
			cout << "Warning: May induce an obsession with purifying everything/madness" << endl;

		}

	}
	cout << "Which account would you like to use? [1] Account 1 or [2] Account 2?: ";
	cin >> accountChoice;

	

	if (accountChoice == 1)
	{
		cout << "Please enter the password for this account: ";
		cin >> passwordAttempt;


		if (passwordAttempt == password)
		{
			if (blackmarkettotal > userBalanceMoney) //shows when you dont have enough money in your bank account to buy everything
			{
				color(12); //makes the text color red

				cout << "I'm sorry, but you don't have enough money to buy all of this\n" << endl;

				cout << "You're going to have to put those items back\n" << endl;
			}

			else if (blackmarkettotal <= userBalanceMoney) //takes the money out of your bank account if you have enough
			{
				userBalanceMoney = userBalanceMoney - blackmarkettotal;

				color(10); //makes the text color green

				cout << "Thanks for shopping\n" << endl;
			}

			totalFrozen = 0.00; //resets the total money spent to $0.00
			totalSoda = 0.00;
			totalMeat = 0.00;

			main(); //takes you back to the main function
		}

		else if (passwordAttempt != password)
		{
			color(12);

			cout << "Incorrect password. Please leave\n" << endl;

			main();
		}
	}

	else if (accountChoice == 2)
	{
		cout << "Please enter the password for this account: ";
		cin >> passwordAttempt;

		

		if (passwordAttempt == password1)
		{
			if (blackmarkettotal > tempUserBalanceMoney) //shows when you dont have enough money in your bank account to buy everything
			{
				color(12); //makes the text color red

				cout << "I'm sorry, but you don't have enough money to buy all of this\n" << endl;

				cout << "You're going to have to put those items back\n" << endl;
			}

			else if (blackmarkettotal <= tempUserBalanceMoney) //takes the money out of your bank account if you have enough
			{
				tempUserBalanceMoney = tempUserBalanceMoney - blackmarkettotal;

				color(10); //makes the text color green

				cout << "Thanks for shopping\n" << endl;
			}

			totalFrozen = 0.00; //resets the total money spent to $0.00
			totalSoda = 0.00;
			totalMeat = 0.00;

			main(); //takes you back to the main function
		}

		else if (passwordAttempt != password1)
		{
			color(12);

			cout << "Incorrect password. Please leave\n" << endl;

			main();
		}
	}
	system ("pause");
	return 0;
}
int blackmarketMain(){
	string yesno;
	cout << "You head to a dark allyway that ends in a small open area that was a dead end." << endl;
	cout << "An old man behind a stand asks you to come over." << endl;
	cout << "He asks if you would like to see his wares. Yes or No " << endl;
	cin >> yesno;
	if (yesno == "yes"){
		cout << "Anything for the right price" << endl;
		cout << "You ask what's currently for sale" << endl;
		cout << "Here's what I got" << endl;
		blackmarketitems();
	}
	else
	{
		main();
	}
	return 0;
}