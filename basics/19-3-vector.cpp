#include <iostream>
#include <vector>
using namespace std;

// size = kitne element pade hai(kitne element iske vector ke andar pada hue hai)
// capacity = kitne element ke liye space assign hua pada hai(kitni memory isko assign hui padi hai)

int main()
{

    vector<int> v; // initializing a vector

    vector<int> a(5,1); // initializing a vector a with size 5 and shuru mai initialize karde 1 ke sath
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b(a);
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size-> " << v.size() << endl;

    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity->  " << v.capacity() << endl;
    cout<<"Size-> " << v.size() << endl;

    v.push_back(3);
    cout<<"Capacity-> " << v.capacity() << endl;
    cout<<"Size-> " << v.size() << endl;

    cout<<"Element at 2nd Index  " << v.at(2) << endl;

    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

}