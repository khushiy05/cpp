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

    // pointer to pointer ----> pointer ke bhi address ko store krta hai
    int** c =&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}