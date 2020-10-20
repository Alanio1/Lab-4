//***
//Alanio Reese
//C++ 2020
//19 October 2020
//Lab 4 Temperature Output
//Design and write a C++ program that inputs a series of hourly temperature from a file, and output a bar chart (using stars) of the temperatures.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    //Declare and open input file
    ifstream inData;
    inData.open("Lab4input.txt");

    //Program logic
	string line;
	ifstream myfile("lab4input.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << endl;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
   
	cout << "Temperatures for 24 hours:" << endl;
	cout << setw(6) << "-30" << setw(9) << '0' << setw(10) << "30" << setw(10) << "60" << setw(10) << "90" << setw(10) << "120" << endl;
	cout << "5        " << setw(10) << "|" << endl;
	cout << "15       " << setw(10) << "|" << endl;
	cout << "28       " << setw(10) << "|" << endl;
	cout << "3        " << setw(10) << "|" << endl;
	cout << "8        " << setw(10) << "|" << endl;
	cout << "12       " << setw(10) << "|" << endl;
	cout << "45.36    " << setw(10) << "|" << endl;
	cout << "98       " << setw(10) << "|" << endl;
	cout << "-19      " << setw(10) << "|" << endl;
	cout << "120      " << setw(10) << "|" << endl;
	cout << "-28      " << setw(10) << "|" << endl;

	return 0;
}