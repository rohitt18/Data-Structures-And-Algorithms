#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n<2 && n>=0){
        if(n==0){
            break;
        }
        else if(n==1){
            int marks;
            cout<<"Enter your marks out of 100 ";
            cin>>marks;

            if(marks>=90){
                cout<<"This is Good";
                break;
            }
            else if(marks<=89 && marks>=60){
                cout<<"This is also Good";
                break;
            }
            else if(marks<=59 && marks>=0){
                cout<<"This is Good as well";
                break;
            }

        }
    }

    return 0;
}
