#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){  
    cout<<"Good Morning"<<endl;
}
// THIS WILL GIVE ERROR
// void fun(int x = 7){  
//     cout<<"Good Morning"<<endl;
// }
void fun(int x, int y){
    cout<<"Kaise ho Sushant"<<endl;
}
int main(){
    fun(); 
}
