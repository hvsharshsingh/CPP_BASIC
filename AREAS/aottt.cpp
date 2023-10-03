#include <iostream>
using namespace std;
int main ()
{
    int A, B, C;
    cout<<"Enter first sides : ";
    cin>>A;
    cout<<"Enter secondsides : ";
    cin>>B;
    cout<<"Enter third sides : ";
    cin>>C;

if ((A+B>C) && (B+C>A) && (C+A>B))
{
    cout<<"Valid Triangle";
}

else 
{
    cout<<"Invalid Triangle";
}
    return 0;
}