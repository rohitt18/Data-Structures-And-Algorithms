#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "output";

    int freq[26]={0};

    for(int i=0;i<s.size();i++){
        // lower case
        int number;
        if(s[i]>='a' && s[i]<='z'){
             number = s[i] - 'a';
        }
        // upper case
        else{
            number = s[i] - 'A';
        }
        freq[number]++;
    }

    int ans = 0;
    int maxi = -1;

    for(int i=0;i<26;i++){
        if(freq[i]>maxi){
            maxi=freq[i];
            ans = i;
        }
    }

    char finalAns = ans + 'a';

    cout << maxi << " " << finalAns << endl;

    return 0;
}