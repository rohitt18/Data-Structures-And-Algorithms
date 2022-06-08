#include <iostream>
using namespace std;


string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), s.length());
    }
    return s;
}

int main()
{

    string a;
    cin >> a;

    string part ="@";
    string ans = removeOccurrences(a, part);

    cout << ans << endl;

    return 0;
}

