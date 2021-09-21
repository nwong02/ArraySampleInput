/*
* Title			: Inputs.cpp
* Project		: Arrays
* Author		: Nelson Wong
* Description	: Write C++ code that will fill an array a with 20 values of type int read in from the keyboard. (Savitch 5.9 Absolute C++ 4th Ed)
*/


#include <iostream>

using namespace std;

int main(void)
{
	int a[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter a number: ";
		cin >> a[i];
	}
	
	for (int i = 0; i < 20; i++)
	{
		cout << a[i] << endl;
	}

	return 0;
}