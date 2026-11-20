#include<iostream>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    // Bubble Sort
    for(int j=0;j<n-1;j++){ // n-1
        int swaps = 0;
        for(int i=0;i<n-1-j;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                swaps++;
            }
        }
        if(swaps==0) break;
    }
    print(arr);
}
