#include <iostream>
using namespace std;

class Student
{
    string name;
    string regno;

public:
    Student(string n, string r)
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
    Student s1("Angel", "26PCA129");
    Student s2("Sahana", "26PCA130");

    cout << "Student 1" <
