#include<iostream>
using namespace std;

int FactroialN(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int main(){
    cout<<"Factroial is :"<<FactroialN(5)<<endl;

    return 0;
}