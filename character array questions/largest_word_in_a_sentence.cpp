#include <iostream>
using namespace std;

// largest word in a sentence

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n+1];
    
    // how to input a sentence
    cin.getline(arr,n);
    cin.ignore();

    int i=0, currLength = 0, maxLength = 0;
    int st=0, maxst=0;

    while(1){

        if( arr[i] == ' ' || arr[i] == '\0' ) {
            if( currLength > maxLength ) {
                maxLength = currLength;
                maxst = st;
            }
            currLength = 0;
            st = i+1;
        }
        else { 
        currLength++;
        }

        if(arr[i] == '\0'){
            break;
        }

        i++;
    }

    cout << maxLength << endl;

    for(int i=0;i<maxLength;i++){
        cout << arr[i + maxst];
    }

    return 0;
}