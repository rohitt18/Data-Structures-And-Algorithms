#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class B{
    public:
    string color;

    public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

// multiple inheritance
class C : public A,public B{

};



int main()
{
    C obj;
    obj.speak();
    obj.bark(); 

    return 0;
}