//there are two types if header files
// 1. systen header files: it comes with compiler 
#include <iostream>
// 2. user defined header files: it is written by the programer
// #include "this.h" //--> this will produce an error if this.h is not present in the current directory 
using namespace std;

int main() {
    int a=4, b=5;
    cout<<"operator in cpp:"<<endl;
    cout<<"following are the operator in cpp:"<<endl;
    //Arithmatic operators
    cout << "The value of a + b is " <<a + b<< endl;
    cout << "The value of a - b is " <<a - b<< endl;
    cout << "The value of a * b is " <<a * b<< endl;
    cout << "The value of a / b is " <<a / b<< endl;
    cout << "The value of a % b is " <<a % b<< endl;
    cout << "The value of a++ is " <<a++<< endl; // this are the increment and decrement operator   // print then increment
    cout << "The value of a-- is " <<a--<< endl; // this are the increment and decrement operator
    cout << "The value of ++a is " <<++a<< endl; // this are the increment and decrement operator   // increment then print
    cout << "The value of --a is " <<--a<< endl; // this are the increment and decrement operator
    cout<<endl; 


    // Assignment operator --> used to assign value to variables
    // int a=3, b=9;
    // char d= 'd';

    // Comparison operators
    cout<<"following are the comaprison operator in cpp"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;   // endl; --> add new line
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    // logical operators
    cout<<"following are the logical operator in cpp"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b) is:"<<((a==b))<<endl;
    return 0;
}
