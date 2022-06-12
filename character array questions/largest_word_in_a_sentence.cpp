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

    int i=0;
    
    int currLength = 0;
    int maxLength = 0;

    while(1){

        if( arr[i] == ' ' || arr[i] == '\0' ) {
            if( currLength > maxLength ) {
                maxLength = currLength;
            }
            currLength = 0;
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

    return 0;
}