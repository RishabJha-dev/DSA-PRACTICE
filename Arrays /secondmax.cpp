#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-62,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > mx) mx = arr[i];
    }
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > smx && arr[i] != mx) smx = arr[i];
    }
    cout<<mx<<" "<<smx<<endl;
}
