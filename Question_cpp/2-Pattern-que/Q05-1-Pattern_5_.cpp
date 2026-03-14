//
//    for n=5
//
//       * * * * * 
//         * * * *
//           * * *
//             * *
//               *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of start to print ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}