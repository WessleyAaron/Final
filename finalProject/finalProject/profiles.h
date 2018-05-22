#include <iostream>
#include <fstream>
using namespace std;

int profileMain() {
	ofstream myfile;
	
	myfile.open("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
	return 0;
}