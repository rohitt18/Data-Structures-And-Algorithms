#include<iostream>
using namespace std;


bool isEven(int n){

    if( n%2 != 0 ){
        return 0;
    }

    return 1;
}

int main(){
    int n;
    cin>>n;

    if(isEven(n)){
        cout<<"Even"<<endl;
    }else{
        cout<<"Not even"<<endl;
    }
}