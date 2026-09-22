#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"enter a number :";
    cin>>n;
    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<"composite number";
            c=0;
            break;   
        }

    }
    if (c==1) cout<<"prime number";
    if (n==1) cout<<"neither a prime nor composite";
}
//another method is factors >=3
//short method
//method 3 --> without creating extra variable
