#include<iostream>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {9,2,0,0,-4,6,0,7,0};
    int n = arr.size();
    print(arr);
    for(int j=0;j<n-1;j++){ // n-1
        for(int i=0;i<n-1-j;i++){
            if(arr[i] == 0){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    print(arr);
}
