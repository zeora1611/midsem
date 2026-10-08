#include <iostream>
using namespace std;

class Student
{
    string name;
    int regno;

public:
    Student(string n, int r)
    {
        name = n;
        regno = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Register Number: " << regno << endl;
    }
};

int main()
{
    Student s1("Angel", 101);
    Student s2("Sahana", 102);

    cout << "Student 1" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2" << endl;
    s2.display();

    return 0;
}
