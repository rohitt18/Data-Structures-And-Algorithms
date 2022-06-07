#include <iostream>
using namespace std;

void eligibleOrNot(int age)
{
    if(age>18){
        cout<<"You are eligible to vote";
    }else{
        cout<<"You are not eligible to vote";
    }
}

int main()
{
    int age;
    cout<<"Enter your age ";
    cin>>age;

    eligibleOrNot(age);

    return 0;
}