#include<iostream>
using namespace std;
void fun(int age = 20){ 
    //  default parameters
    cout<<"My age is "<<age<<endl;
}

int main(){
    fun(24);
}
    