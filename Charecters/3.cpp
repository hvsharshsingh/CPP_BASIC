#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"Enter a charecter : ";
    cin>>ch;
    int ascii = (int)ch;
    if ( ascii >= 97 && ascii <= 122 )
    {
        cout<<"Lower Case Alphabet ";
    }

    else {
        cout<<"Condition not Matching ";
    }
    return 0;
}