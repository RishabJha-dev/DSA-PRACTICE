#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,18,11,2},{9,9,4,4},{7,10,13,15}};
    int maxRow = -1, maxSum = INT_MIN;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
        } 
    }
    cout<<maxRow<<" "<<maxSum;
}
