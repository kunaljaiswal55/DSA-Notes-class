// Class Question 2: Simple interest
#include<iostream>
using namespace std;
int main(){
    float p, r, t, SI;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time period: ";
    cin>>t;
    SI = (p * r * t) / 100;
    cout<<"Simple Interest: "<<SI<<endl;
    return 0;
}