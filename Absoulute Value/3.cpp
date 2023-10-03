#include <iostream> 
using namespace std;
int main(){
    int CP;
    int SP;
    cout<<"Enter the Cost Price : ";
    cin>>CP;
    cout<<"Enter the Selling Price : ";
    cin>>SP;
if ( SP > CP ){
    cout<<"Profit is : ";
    cout<< SP - CP;
    }
if ( CP > SP ){
    cout<<"Loss is : ";
    cout<< CP - SP;

}
if ( SP == CP ){
    cout<<"No Profit & No Loss";
}
    return 0;
}