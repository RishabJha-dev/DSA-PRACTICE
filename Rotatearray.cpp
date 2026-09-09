#include<iostream>
#include<vector>
using namespace std;
void rev(vector<int>& arr , int i, int j ){
     while (i<j){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
     }
}
int main(){
    vector<int> arr={10,20,30,40,50,60,70};
    int n = arr.size();
    int k;
    cout<<"enter value of k :";
    cin>>k;
    k %=n ;
    rev(arr,0,n-1);
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    for (int ele : arr){
        cout<<ele<<" ";
    }
}
