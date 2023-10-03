#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    if (  x % 5 == 0 && x % 3 == 0 )
    {
        cout<<"Yes, the number is divisible by 5 and 3";
    }

    if (  x % 5 != 0 && x % 3 == 0 )
    {
        cout<<"The number is divisible by 3 but not divisible by 5";
    }

    if (  x % 5 == 0 && x % 3 != 0 )
    {
        cout<<"The number is divisible by 5 but not divisible by 3";
    }

    if (  x % 5 != 0 && x % 3 != 0 )
    {
        cout<<"The number is neither divisible by 5 nor divisible by 3";
    }
    return 0;
}