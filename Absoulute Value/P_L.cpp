#include <iostream> 
using namespace std;
int main(){
    int CP;
    int SP;
    cout<<"Enter the Cost Price : ";
    cin>>CP;
    cout<<"Enter the Selling Price : ";
    cin>>SP;
if ( SP < CP ){
    cout<<"PROFIT";
}
if ( SP > CP ){
    cout<<"LOSS";
}
if ( SP == CP ){
    cout<<"No Profit & No Loss";
}
    return 0;
}