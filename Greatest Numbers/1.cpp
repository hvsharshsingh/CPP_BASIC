#include <iostream>
using namespace std;
int main ()
{
     int a;
     int b;
     int c;
     cout<<"Enter a number for A : ";
     cin>>a;
     cout<<"Enter a number for B : ";
     cin>>b;
     cout<<"Enter a number for C : ";
     cin>>c;

     if ( a > b && a > c )
     {
        cout<<"A is the greatest number among all";
     }

     if ( b > a && b > c )
     {
        cout<<"B is thw gretes number among all";
     }

     if ( c > a && c > b )
     {
        cout<<"C is the gretes number among all";
     }
    return 0;
}