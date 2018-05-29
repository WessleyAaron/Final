#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>
#include <random>
#include "time.h"
using namespace std;


int blackmarketitems(){
	srand(time(NULL));
	string yesno;
	int itemid;
	int accountChoice;
	int itemsstock;
	string tempstock[6] {};
	double tempprice[6] {};
	int tempid[6] {};
	double blackmarkettotal = 0.00;
	string blackitems[20] = { "Get out of jail free card", "Soul of a forgotten god", "The universal truth",
		"The communist manifesto", "The universal key", "Nuclear launch codes", "Aegis of the immortal",
		"Harold bat", "A plastic knife", "DDos software", "A cursed brick", "Faulty blink dagger", "Rusted coin",
		"Blackout glasses", "An endless pizza", "Assorted drugs", "Double-edged sword", "A gun", "Marble made in china", "The endless bag" };
	double blackprices[20] = { 150.99, .99, 99999.99, 0.02, 555.99, 1.99, 666.66, 30.99, 77.99, 44.55, 20.99, 9000.98, 200.99, 15.99, 11.99, 49.99, 60.99, 777.77, 1.98, 300.99 };
	int blackids[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	for (int i = 0; i < 6; i++){
	 itemsstock = rand() % 20;

		cout << blackitems[itemsstock] << " : $ " << blackprices[itemsstock] << " item ID " << i << endl;
		 tempstock[i] = blackitems[itemsstock];
		tempprice[i] = blackprices[itemsstock];
		tempid[i] = blackids[itemsstock];

	}
	cout << "Please enter the ID of the item you would like to buy " << endl;
	cin >> itemid;
	blackmarkettotal += tempprice[itemid];
	cout << "You have purchased " << tempstock[itemid] << endl;
	cout << "That will cost you $" << blackmarkettotal << endl; //shows your total from all the parts of the store
	cout << "Would you like to have a discription of what you purchased? Yes or No" << endl;
	cin >> yesno;
	if (yesno == "yes"){
		switch (tempid[itemid]){
		case 0:
			cout << "The Get out of jail free card:" << endl;
			cout << "Allows you to be exempted of all crimes" << endl;
			cout << "Must be handed to an authority figure or officer of some kind to work" << endl;
			cout << "Only works once" << endl;
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
			cout << "You live in a communist nation" << endl;
			break;
		case 4:
			cout << "The universal key:" << endl;
			cout << "Key that will open any door, regardless of it existing or not" << endl;
			cout << "Pretty self explanatory, dumbass" << endl;
			break;
		case 5:
			cout << "Nuclear launch codes:" << endl;
			cout << "If you don't know what these are, why did you buy them?" << endl;
			break;
		case 6:
			cout << "Aegis of the immortal:" << endl;
			cout << "Must be on your person at all times. Will resurrect you one time only" << endl;
			break;
		case 7:
			cout << "Harold Bat:" << endl;
			cout << "A bat made for the sole purpose of purifying all corruption" << endl;
			cout << "Warning: May induce an obsession with purifying everything/madness" << endl;
			break;
		case 8:
			cout << "A plastic knife:" << endl;
			cout << "A plastic knife so sharp that it is capable of cutting tears in the fabric of our dimension" << endl;
			cout << "(Not able to cut paper" << endl;
			break;
		case 9:
			cout << "DDos Software:" << endl;
			cout << "Software that causes a DDos attack to whatever system runs its program" << endl;
			break;
		case 10:
			cout << "A cursed brick:" << endl;
			cout << "A brick that you can never lose" << endl;
			cout << "Will always end up back in your hand after 10 seconds" << endl;
			cout << "Must be sold to officially get rid of" << endl;
			break;
		case 11:
			cout << "Faulty blink dagger:" << endl;
			cout << "A blink dagger that causes you to teleport backwards when you try jumping farwards" << endl;
			break;
		case 12:
			cout << "Rusted coin:" << endl;
			cout << "An ancient coin that makes you the most unlucky person on the planet" << endl;
			cout << "Causes you to win every lottery you enter" << endl;
			cout << "(May also cause you to lose all that money due to unlucky event)" << endl;
			break;
		case 13:
			cout << "Blackout glasses:" << endl;
			cout << "Sunglasses that, when worn for the first time, causes permanent blindness" << endl;
			cout << "Vision only returns when sunglasses are worn" << endl;
			cout << "(Also causes irreparable douchiness)" << endl;
			break;
		case 14:
			cout << "An endless pizza" << endl;
			cout << "A box of pizza that always has fresh, out-of-the-oven pizza" << endl;
			cout << "(Only serves pineapple pizza)" << endl;
			break;
		case 15:
			cout << "Assorted drugs:" << endl;
			cout << "A bag of random drugs" << endl;
			break;
		case 16:
			cout << "Double-edged sword:" << endl;
			cout << "A sword that, when used to inflict damage on either people or objects," << endl;
			cout << "Causes wounds to appear on you instead" << endl;
			break;
		case 17:
			cout << "A gun:" << endl;
			cout << "When fired, causes your eardrums to rupture" << endl;
			break;
		case 18:
			cout << "Marble made in China:" << endl;
			cout << "A marble, when dropped, causes earthquakes in China" << endl;
			cout << "(Doesn't matter where it is dropped, earthquakes only happen in China)" << endl;
			break;
		case 19:
			cout << "The endless bag:" << endl;
			cout << "A bag that contains a pocket dimension that can hold absolutely anything" << endl;
			cout << "(The bag is the size of a marble bag and can only contain items that can fit through its opening)" << endl;
			break;
		default:
			cout << "That wasn't a choice. Get out of my shop" << endl;
			main();
			break;
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

			main(); //takes you back to the main function
		}

		else if (passwordAttempt != password1)
		{
			color(12);

			cout << "Incorrect password. Please leave\n" << endl;

			main();
		}
	}

	return 0;
}
int blackmarketMain(){
	string yesno;
	cout << "You head to a dark allyway that ends in a small open area that was a dead end." << endl;
	cout << "An old man behind a stand asks you to come over." << endl;
	cout << "He asks if you would like to see his wares. Yes or No" << endl;
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