#include <iostream>
using namespace std;

bool isPrime(int n){
    int i =2;
    while(i<n){
        if(n%i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

   
    if(isPrime(n)){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }

}