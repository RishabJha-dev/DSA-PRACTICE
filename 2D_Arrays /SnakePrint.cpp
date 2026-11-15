#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,18,11,2},{9,9,4,4},{7,10,13,15}};
    for(int i=0;i<3;i++){
        if(i%2 == 0){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
