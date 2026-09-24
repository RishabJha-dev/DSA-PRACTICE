#include<iostream>
using namespace std;
int main(){

    // method 1  
    // int n,c=1;
    // cout<<"enter number of terms :";
    // cin>>n;
    // for (int i=2;c<=n;i*=2){
    //     cout<<i<<" ";
    //     c+=1;
    // }

    // method 2
    int a ,r ,n ;
    cin>>a>>r>>n;
    int nth =1;
    for(int i=a ;nth<=n; i=i*r ){
        cout<<i<<" ";
        nth++;
    }
}
