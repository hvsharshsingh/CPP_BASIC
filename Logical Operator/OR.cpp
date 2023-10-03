#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;

    if ( x > 99 && x < 1000)
    {
       cout<<"The number is three digit number";
    }

    if ( x < 100 && x < 1000)
    {
        cout<<"The number is not three digit number";
    }

    if ( x > 1000)
    {
        cout<<"The number is greater then three digit number";
    }
    return 0;
}