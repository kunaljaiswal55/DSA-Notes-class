//Class Question 8: Sum of n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}