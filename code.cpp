#include <iostream>
using namespace std;

class Student
{
    int marks;

public:

    Student()
    {
        marks = 0;
    }

    Student(int m)
    {
        marks = m;
    }

    Student(Student &s)
    {
        marks = s.marks;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1;
    cout << "Default Constructor:" << endl;
    s1.display();

    Student s2(90);
    cout << "Parameterized Constructor:" << endl;
    s2.display();

    Student s3(s2);
    cout << "Copy Constructor:" << endl;
    s3.display();

    return 0;
}