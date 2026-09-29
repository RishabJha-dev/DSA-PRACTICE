#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int a = 3, d = 4;
    for(int i=1;i<=n;i++){ 
        cout<<a<<" ";
        a += d;
    }
}
