#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number to check weather it is odd or even : ";
    cin>>x;
    if(x%2==0){
        cout<<"It is an Even Number"<<endl;
        cout<<"YEPREEE....";
    }
    if(x%2!=0){
        cout<<"It is an Even Number"<<endl;
        cout<<"OPSSSS....";
    }
    return 0;
}