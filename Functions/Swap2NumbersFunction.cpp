#include<iostream>
using namespace std;
void swap(int& a, int& b){ // alias
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5, b = 2;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}
