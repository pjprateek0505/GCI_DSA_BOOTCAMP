// recursion 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fact(int a)
{
	if (a == 0)
		return 1;
	else
		return a*fact(a - 1);
}
int main()
{
	int n;
	cout << "enter the number: ";
	cin >> n;
	cout << fact(n);
}

