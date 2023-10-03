#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if( x % 2 == 0 ){
        cout<<"It is a Even Number";
    }
    if( x % 2 != 0 ){
        cout<<"It is a Odd Number";
    }
    return 0;
}