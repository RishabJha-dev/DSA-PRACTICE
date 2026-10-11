#include <iostream>
using namespace std;
void sumit(){
    cout<<"Hi Sumit"<<endl;
}
void arjun(){
    sumit();
    cout<<"Hi Arjun"<<endl;
}
void anu(){
    cout<<"Hi Anu"<<endl;
    arjun();
}
int main(){
    anu();
}
