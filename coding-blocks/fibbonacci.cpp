#include<iostream>
using namespace std;
int fibbonacci(int g){
    if (g==0 || g==1){
        return g;
    }
    return fibbonacci(g-1)+fibbonacci(g-2);
}

int main(){
    cout<<"Enter the n term to find in Fibonacci series: ";
    int n;
    cin>>n;
    cout<<fibbonacci(n);
    cout<<endl;
    for(int i=0; i<=n; i++){
        cout<<fibbonacci(i)<<" ";
    }
    return 0;

}