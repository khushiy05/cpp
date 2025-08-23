#include<iostream>
using namespace std;
int main(){
    /*Loops in cpp:
    //there are three types of loops in cpp:
      1 - For loop - block of statement 
      2 - while loop
      3 - do-which loop
    */

    /*For loop in cpp*/
    //int i = 1;
    //cout<<i;
    //i++; 

    // syntax for for loop
    //for(initialization; condition; updation)
    //{
        //loop body(cpp code);
    //}
    //for (int i = 0; i < 40; i++)
    //{
        //cout<<i<<endl;
        //i++;
    //}

    // example of infinite  for loop 
    //for (int i =1; 34 <= 40; i++)
    //{
    //cout<<i<<endl;
    //}

    /*syntax for while loop in cpp
    while (condition)
    {
        c++ statement;
    }
    */

    // printing 1 to 40 using while loop
    //int i=1;
    //while(i<=40){
        //cout<<i<<endl;
        //i++;
    //}
    
    // example of infinite  while loop
    //int i = 1;
   //while (true)
    //{
        //cout<<i<<endl;
        //i++;
    //}
    
    /*syntax for do- while loop in cpp 
    do 
    {
    c++ statement;
    }while condition;
    */
     
    // printing 1 to 40 using do-while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);

    return 0;

}