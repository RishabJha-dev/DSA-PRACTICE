#include<iostream>
using namespace std;
int main(){    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    n--;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n+1-i;j++){ 
            cout<<"* ";
        }
        cout<<endl;
    }
}
