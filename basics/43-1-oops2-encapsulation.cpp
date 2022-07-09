#include <bits/stdc++.h>
using namespace std;

class Student {

    private:
        string name;
        int age;
        int height;

    public:

    int getAge(){
        return this->age;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getStudentName() {
        return this->name;
    }

    void setStudentName(string name) {
        this->name = name;
    }
    

};

int main()
{
    Student obj;

    obj.setStudentName("Rohit");
    obj.setAge(21);

    cout << obj.getStudentName() << endl;
    cout << obj.getAge() << endl;


    cout << "Sab sahi chal rhaa hai" <<  endl;

    return 0;
}