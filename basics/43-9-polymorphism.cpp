#include<bits/stdc++.h>
using namespace std;

class A {

    public:
    void sayHello() {
        cout<<"Hello Rohit\n";
    }

    int sayHello(string name,int n) {
        cout<<"Hello Rohit\n";
        return n;
    }

    void sayHello(string name) {
        cout<<"Hello "<<name <<endl;
    } 
};

int main() {

    A obj;

    obj.sayHello();
    obj.sayHello("Rohit gupta");
    cout<<obj.sayHello("Rohit",100)<<endl;


    return 0;
}