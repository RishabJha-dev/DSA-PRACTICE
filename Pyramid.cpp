#include<iostream>
using namespace std;
int main(){
    int n,v=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<n+1-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=(i+v);j++){
            cout<<"* ";
        }
        v+=1;
        cout<<endl;
    }
 //method 2 nsp,nst

    int n,v=0;
    cin>>n;
    int nsp= n-1,nst = 1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for (int j=1;j<=nst;j++){
            cout<<"* ";
        }
        nsp--;
        nst +=2;
        cout<<endl;
    }


}
