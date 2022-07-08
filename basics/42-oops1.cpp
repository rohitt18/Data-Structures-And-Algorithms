#include <bits/stdc++.h>
using namespace std;

class Hero {
    
    // properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    } 

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main()
{   
    // static allocation
    Hero a;
    // use setter for health bec it is private
    a.setHealth(80);
    a.setLevel('A');
    cout << "level: " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;



    // dynamically
    Hero *b = new Hero;
    // use setter for health bec it is private
    b->setHealth(100);
    b->setLevel('B');

    cout << "level : " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout<<"level is " << b->level << endl;
    cout<<"health is " << b->getHealth() << endl;

    // // creation of object
    // Hero ramesh;

    // cout<<"Ramesh health is " << ramesh.getHealth() << endl; // garbage value

    // // use setter
    
    // ramesh.setHealth(70);
    // // ramesh.health = 70;
    // ramesh.level = 'A';

    // cout << "health is : " << ramesh.getHealth() << endl;
    // cout << "level is : " << ramesh.level << endl;

    // // cout<<"size : "<< sizeof(h1) << endl;

    return 0;
}