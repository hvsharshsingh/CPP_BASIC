#include <iostream>
using namespace std;

int main ()
{

int X;

cout<<"Enter a number : ";
cin>>X;

if( X % 2 == 0 ){
    cout<<"It is a Even Number";
}

if( X % 2 != 0 ){
    cout<<"It is a Odd Number";
}

    return 0;
}