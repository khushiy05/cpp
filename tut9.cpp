#include<iostream>
using namespace std;
int main (){
    //cout<<"This is tutorial 9"
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"tou are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to my party"<<endl;
    }
       
    return 0;
}