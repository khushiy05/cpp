#include<iostream>;
using namespace std;
int main(){
    // what is pointers? ---> it is datatypes which holds the address of other data types.

    int a=3;
    int * b= &a;  
    // "&" (address of) operator
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<a<<endl;

    //"*" (value at) dereference operator
    cout<<"the value at address b is "<<*b<<endl;

    return 0;
}