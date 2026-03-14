// Class Question 4: Largest of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    if(num1 > num2){
        cout<<num1<<" is the largest number."<<endl;
    } else {
        cout<<num2<<" is the largest number."<<endl;
    }
    return 0;
}