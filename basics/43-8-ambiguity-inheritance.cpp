#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    void func() {
        cout << "inside func of A\n";
    }
};

class B {
    public:
    void func() { 
        cout<<"inside func of B\n";
    }
};

class C: public A, public B {

};

// main function
int main()
{
    C object1;
    object1.A::func();
    object1.B::func();

    return 0;
}