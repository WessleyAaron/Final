#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>
#include <bits/stdc++>
using namespace std;

int blackmarketitems(){
	string blackitems[20] = { "get out of jail free card", "soul of a forgotten god", "the universal truth", "the communist manufesto ", "the universal key","nuclear launch codes", "aegis of the immortal", "harold bat", "a plastic knife", "DDos software", "a cursed brick", "faulty blink dagger","rusted coin", "blackout glasses", ""};
}
int blackmarketMain(){
	string yesno;
	cout << "you head to a dark allyway that ends in a small open area that was a dead end " << endl;
	cout << "a old man behind a stand asks you to come over and asks if you would like to see his wares yes or no " << endl;
	cin >> yesno;
	if (yesno == "yes"){
		cout << "anything for the right price " << endl;
		cout << "you ask whats currently for sale " << endl;
		cout << "heres what i got " << endl;
	}
	else
	{
		main();
	}
	return 0;
}