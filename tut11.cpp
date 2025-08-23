#include<iostream>;
using namespace std;
int main(){
    /*for (int i = 0; i < 4; i++)
    {

        if(i==2){
            break; // break; - it exits from loop the output will be 0,1,2 if the "cout<<i<<endl;" will be there 
        }
        cout<<i<<endl; // the output will be 0 and 1 because of the break; 
    }*/

    for (int i = 0; i <40; i++)
    {
        if(i==2){
            continue; //abhi jo run kr rhe ho usko yahe pe rok do aur next itration pe jao
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}