#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Method 2
    // int stars = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=stars;j++){
    //         cout<<"* ";
    //     }
    //     stars += 2;
    //     cout<<endl;
    // }
}
