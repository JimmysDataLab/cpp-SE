#include <iostream>
using namespace std;

int* ReturnHeapAddresse(){

    int* ptr = new int;
    *ptr = 30;

    return ptr;

}

int* ReturnStackAddresse(){

    int p = 30;

    // warning: address of stack memory 
    // associated with local variable 'p' 
    // returned [-Wreturn-stack-address]
    return &p;

}

int main(){


int* ptr;
int* p;


ptr = ReturnHeapAddresse();
p = ReturnStackAddresse();

cout<<"Value: "<<*ptr<<endl;
cout<<"Addrese: "<<ptr<<endl;

cout<<"Value: "<<*p<<endl;
cout<<"Addrese: "<<p<<endl;
}