#include<iostream>
using namespace std;
int main(){
    int a[] = {10,20,40,70,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4, n = sizeof(b)/4;
    int c[m+n];
    int i = 0, j = 0, k = 0;
    while(i<m && j<n){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else // b[j] < a[i]
            c[k++] = b[j++];
    }
    while(j<n)
        c[k++] = b[j++];
    while(i<m)
        c[k++] = a[i++];
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}
