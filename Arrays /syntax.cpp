#include<iostream>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62,35,78,12};
    // cout<<size(marks)<<endl; // giving error in old cpp ver
    cout<<sizeof(marks)/sizeof(int)<<endl;
    cout<<marks[2]<<endl;
    marks[2] = 23; // update
    cout<<marks[2]<<endl;
    cin>>marks[2]; // input
    cout<<marks[2]<<endl;
}
