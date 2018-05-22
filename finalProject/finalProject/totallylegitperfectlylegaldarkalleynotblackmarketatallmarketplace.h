#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>
#include <random>
using namespace std;

int blackmarketitems(){
	string blackitems[20] = { "get out of jail free card", "soul of a forgotten god", "the universal truth", "the communist manufesto ", "the universal key","nuclear launch codes", "aegis of the immortal", "harold bat", "a plastic knife", "DDos software", "a cursed brick", "faulty blink dagger","rusted coin", "blackout glasses", " an endless pizza", "assorted drugs", "double edged sword", "a gun", "marble made in china","the endless bag"};
	double blackprices[20] = { 150.99, .99,99999.99,0.02,555.99,1.99, 666.66,30.99, 77.99, 44.55,20.99,9000.98,200.99,15.99,11.99,49.99,60.99,777.77,1.99,300.99 };
	for (int i = 0; i < 6; i++){
		int itemsstock = rand() % 20;
		cout << blackitems[itemsstock] << " : " << blackprices[itemsstock] << endl;
	}
	system ("pause");
	return 0;
}
int blackmarketMain(){
	string yesno;
	cout << "You head to a dark allyway that ends in a small open area that was a dead end " << endl;
	cout << "An old man behind a stand asks you to come over and asks if you would like to see his wares yes or no " << endl;
	cin >> yesno;
	if (yesno == "yes"){
		cout << "anything for the right price " << endl;
		cout << "you ask whats currently for sale " << endl;
		cout << "heres what i got " << endl;
		blackmarketitems();
	}
	else
	{
		main();
	}
	return 0;
}