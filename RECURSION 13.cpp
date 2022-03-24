
#include <iostream>
using namespace std;
int printeven(int a,int b)
{
    if (a >= b)
    {
        return 0;
    }
    cout << a << endl;
    printeven(a+2, b);
}
int main()
{
    int num1, num2;
    cout << "enter the range: ";
    cin >> num1>>num2;
    cout << printeven(num1,num2);
    return 0;
}

