#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rno;
    float gpa;

    Student() {} // default constructor:

    Student(string s, int r, float g) // Parameterised constructor:
    {
        name = s;
        rno = r;
        gpa = g;
    }

    Student(int r, string s, float g) // Parameterised constructor:
    {
        name = s;
        rno = r;
        gpa = g;
    }

    Student(string s, int r) // Parameterised constructor:
    {
        name = s;
        rno = r;
    }
};

void print(Student s)
{
    cout << s.name << endl
         << s.rno << endl
         << s.gpa << endl;
}

// void print(Student s)
// {
//     cout << s.name << endl
//          << s.rno << endl;
// }

int main()
{
    Student s1("Md Absar", 73, 9);
    Student s2("Md Asif", 74);
    s2.gpa = 8;

    Student s3(70, "Md sohel", 7);

    // Student s4 = s1; // Deep copy:
    // s4.name = "Aakib";
    // print(s4);

    Student s5(s1); // Copy constructor: // Deep copy:
    s5.name = "Javed";

    print(s5);
    print(s1);

    // print(s2);
    // print(s3);

    // Student s4;
    // s4.name = "Md Asif";
    // s4.rno = 74;
    // s4.gpa = 8;
    // print(s4);
}