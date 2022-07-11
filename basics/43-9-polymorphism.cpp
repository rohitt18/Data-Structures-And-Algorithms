#include<bits/stdc++.h>
using namespace std;

// compile time polymorphism
// function overloading
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

// operator overloading
class B {
    
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout<<"output "<<value2-value1<<endl;
        cout<<"Hello rohit gupta"<< endl;
    }

    void operator() () {
        cout<<"mai bracket hun " << this->a << endl;
    }

};


// run time polymorphism
class Animal {
    
    public:
    void speak() {
        cout<<"speaking"<<endl;
    }

};

class Dog: public Animal {

    public:
    void speak() {
        cout<<"barking"<<endl;
    }
};


int main() {

    A obj;
    obj.sayHello();
    obj.sayHello("Rohit gupta");
    cout<<obj.sayHello("Rohit",100)<<endl;

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    Dog object;
    object.speak();

    return 0;
}
