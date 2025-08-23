#include<iostream>;
using namespace std;
int main(){
    for (int i = 0; i < 4; i++)
    {

        if(i==2){
            break; // break; - it exits from loop the output will be 0,1,2 if the "cout<<i<<endl;" will be there 
        }
        cout<<i<<endl; // the output will be 0 and 1 because of the break; 
    }
    
    return 0;
}