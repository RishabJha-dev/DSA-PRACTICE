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
    // Selection Sort
    for(int j=0;j<n-1;j++){ // n-1 passes
        int mn = arr[j], mnIdx = j;
        for(int i=j;i<n;i++){
            if(arr[i] < mn){
                mn = arr[i];
                mnIdx = i;
            }
        }
        swap(arr[j],arr[mnIdx]);
    }
    print(arr);
}
