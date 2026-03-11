#include<iostream>
using namespace std;
int fibbonacci(int g){
    if (g==0 || g==1){
        return g;
    }
    return fibbonacci(g-1)+fibbonacci(g-2);
}
int main(){
    cout<<"Enter the number of rows: ";
    int n ;
    cin >> n ;
    int g=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<fibbonacci(g)<<" ";
            g++;
        }
    cout<<endl;

    }
    return 0;

}