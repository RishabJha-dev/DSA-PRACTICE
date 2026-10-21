#include<iostream>
using namespace std;
int main(){
    int a = 8, b = 7;
    cout<<a<<" "<<b<<endl;
    a = (a+b) - (b = a);

    // a = a + b;
    // b = a - b;
    // a = a - b;

    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
