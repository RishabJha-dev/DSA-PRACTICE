#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9}; // 2 3 4 8 9
    sort(v.begin()+1,v.end()-1);
    for(int ele : v) cout<<ele<<" ";
}
