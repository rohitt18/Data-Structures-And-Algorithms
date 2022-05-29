#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("rohit");
    q.push("rajaram");
    q.push("gupta");

    cout << "Size before pop " << q.size() << endl;

    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "First Element " << q.front() << endl;

    cout << "Size after pop " << q.size() << endl;

    cout << "empty or not " << q.empty() << endl;


}