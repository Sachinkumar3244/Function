#include<iostream>
using namespace std;

void fun(){
    cout<<"Hi"<<endl;
}

void fun(int x){
    cout<<"Gn"<<endl;
}

int main(){
    fun();
    fun(5);
}