#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str1 = "afghjkllkjhgfdcv";
    string str2 = "ASDFGHJKLFGHJMNB";

    // cout << 'a' - 'A' << endl;

    // convert to Upper Case
    for(int i=0;i<str1.size();i++){
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i] = str1[i] - 32;
        }
    }

    cout<<str1<<endl;

    // convert to Lower Case
    for(int i=0;i<str2.size();i++){
        if(str2[i]>='A' && str2[i]<='Z'){
            str2[i] = str2[i] + 32;
        }
    }
    cout<<str2<<endl;

    return 0;
}