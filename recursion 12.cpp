

#include <iostream>
using namespace std;
int power(int a,int b)
{
    if (a == 0)
        return 1;
    else
        return(b * power(a - 1, b));
}
int main()
{
    cout<<power(2,4);
    return 0;
}

