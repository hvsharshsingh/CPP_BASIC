#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"Enter a charecter : ";
    cin>>ch;
    int x = (int)ch;
    if ( (x >= 65 && x <= 90) || (x >= 97 && x <= 122) )
    {
        cout<<"ALPHABET";
    }

    else {
        cout<<"Not a Alphabet";
    }
    return 0;
}