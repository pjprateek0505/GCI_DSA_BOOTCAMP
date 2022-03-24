
#include <iostream>
using namespace std;
int num(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        num(a / 2);
        cout << a % 2;
    }
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    cout << num(n);
    return 0;
}

