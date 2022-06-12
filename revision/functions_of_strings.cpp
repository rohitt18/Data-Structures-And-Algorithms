#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;

    string s1 = "fam";
    string s2 = "ily"; 

    // append.

    // s1.append(s2);
    // cout<<s1<<endl;
    
    // addition of 2 strings.

    // str = s1 + s2;
    // cout<<str<<endl;

    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
   

    return 0;
}