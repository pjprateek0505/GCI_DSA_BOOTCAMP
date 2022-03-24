// recursion 19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int beg, int end)
{
	int mid;

	if (beg > end) {

		cout << "Number is not found";
		return 0;

	}
	else {

		mid = (beg + end) / 2;

		if (arr[mid] == num) {

			cout << "Number is found at " << mid << " index \n";
			return 0;

		}
		else if (num > arr[mid]) {

			BinarySearch(arr, num, mid + 1, end);

		}
		else if (num < arr[mid]) {

			BinarySearch(arr, num, beg, mid - 1);
		}
	}


}

int main() {

	int arr[100], num, i, n, beg, end;

	cout << "Enter the size of an array (Max 100) \n";
	cin >> n;

	cout << "Enter the sorted values \n";

	for (i = 0; i < n; i++) {

		cin >> arr[i];
	}

	cout << "Enter a value to be search \n";
	cin >> num;

	beg = 0;
	end = n - 1;

	BinarySearch(arr, num, beg, end);

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
