#include <bits/stdc++.h>
using namespace std;

class Hero {
    
    // properties
    private:
    int health;
    public:
    char *name;
    char level;


    // default constructor
    Hero(){
        cout << "Default constructor called" << endl;
        name = new char[100]; // dynamically allocate array
    }

    // parameterised constructor
    Hero(int health){
        // cout<<"this -> "<<this<<endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero& temp) {
        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[Name:"<<this->name<<", ";
        cout << "helath:" << this->health << ", ";
        cout << "level:"<< this->level << "]";
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

    void setName(char name[]){
        this->name = name;
    }

};

int main()
{   
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[6] = "Rohit";
    hero1.setName(name);

    hero1.print();


    // Hero suresh(70,'C');
    // suresh.print();

    // // copy constructor
    // Hero ritesh(suresh);
    // ritesh.print();
    


    // // object created statically
    // Hero rohit(10);
    // cout<<"address of rohit " << &rohit << endl;
    // rohit.print();

    // // dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(100,'A');
    // temp.print();

    // Hero tt; // bina parameter ke karoge initialize toh default constructor call hoga


    /*
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
    */



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