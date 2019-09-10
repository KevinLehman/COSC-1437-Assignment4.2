/*
Kevin Lehman - 1463553
Tarrant County College - COSC 1437 - Fall 2017
Assignment  4-2 Source Code
*/

#include <iostream>
#include <string>

using namespace std;
const int NUM = 3;

int main()
{
	string *carptr[NUM];


	carptr[0] = new string{ "Chevy" };
	carptr[1] = new string{ "Ford" };
	carptr[2] = new string{ "Dodge" };

	for (int count = 0; count < NUM; count++)
	{
		cout << "Value of string pointer " << count << " is " << *carptr[count] << "." << endl;
	}

	delete carptr[1];
	carptr[1] = nullptr;

	for (int count = 0; count < NUM; count++)
	{
		if (carptr[count] != nullptr)
		{
			cout << "Value of string pointer " << count << " is " << *carptr[count] << "." << endl;
		}
	}
	system("PAUSE");
	return 0;
}