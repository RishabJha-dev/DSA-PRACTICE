#include<iostream>
using namespace std;
void countDigits(int n, int* ptr){
    int count = (n==0) ? 1 : 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    *ptr = count;
}
int main(){
    int n;
    cin>>n;
    int c = 0;
    countDigits(n,&c);
    cout<<c;
}
