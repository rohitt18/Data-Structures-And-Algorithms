#include <iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;

    int i = 1;
    int posCount=0;
    int negCount=0;
    int zeroCount=0;

    while(i<=n){
        int num;
        cin>>num;
        if(num>0){
            posCount++;
        }
        else if(num<0){
            negCount++;
        }
        else if(num==0){
            zeroCount++;
        }
        i++;
    }

    cout << "The no of +ve no.s were : " << posCount << endl;
    cout << "The no of -ve no.s were : " << negCount << endl;
    cout << "The no of 0's were : " << zeroCount << endl;

    return 0;
}