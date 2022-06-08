
#include <iostream>
using namespace std;

string replaceSpaces(string &str)
{
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'e')
        {
            temp.push_back('i');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{

    string a;
    cin >> a;

    string temp =  replaceSpaces(a);

    cout << temp << endl;

    return 0;
}