#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int nsp = n-1, nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        nsp--;
        nst += 2;
        cout<<endl;
    }
    nsp = 1;
    nst = 2*n-3;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){ 
            cout<<"* ";
        }
        nsp++;
        nst -= 2;
        cout<<endl;
    }
}
