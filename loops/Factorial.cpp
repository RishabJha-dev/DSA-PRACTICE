#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    cout<<fact;
}
