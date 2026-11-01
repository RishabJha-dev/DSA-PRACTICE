#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    // Input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // Print the negative elements of array
    for(int i=0;i<=n-1;i++){
        if(arr[i] < 0) cout<<arr[i]<<" ";
    }
}
