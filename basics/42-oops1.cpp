#include <bits/stdc++.h>
using namespace std;

class Hero {
    
    // properties
    public:
    int health;
    char level;

    void print(){
        cout << level << endl;
    }


};

int main()
{   
    // creation of object
    Hero ramesh;

    ramesh.health = 70;
    ramesh.level = 'A';

    cout << "health is : " << ramesh.health << endl;
    cout << "level is : " << ramesh.level << endl;

    // cout<<"size : "<< sizeof(h1) << endl;

    return 0;
}