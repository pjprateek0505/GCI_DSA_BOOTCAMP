// recursion 1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

// recursive function
void printUptoN(int n) {
    //condition for calling
    if (n > 1)
        printUptoN(n - 1);
    cout << n << " ";
}

int main() {
    // declare variable
    int n;
    //take input of the number upto which 
    // natural numbers will be printed
    cout << "Enter the upper limit= ";
    cin >> n;

    cout << "First " << n << " natural numbers are : ";
    // call the recursive function to print
    // the natural numbers
    printUptoN(n);

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
