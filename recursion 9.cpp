// recursion 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int largest(int A[] , int l , int h)
{
	int mid = (l+h) / 2; 

	if (l == h) 
	{
		return A[mid];
	}
	else {
		return max(largest(A, l, mid), largest(A, mid + 1, h));
		
	}
}
int main()
{
	int A[] = { 5,10,15,20,30 , 23 ,12,100 , 18 };
	cout<<largest(A, 0 , 9);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
