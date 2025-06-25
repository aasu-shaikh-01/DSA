#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int rolNo;

    Student() {};

    Student(string n, int r, float m)
    {
        name = n;
        rolNo = r;
        marks = m;
    }
    float getMarks() // getter:
    {
        return marks;
    }

    void setMarks(float m) // setter:
    {
        marks = m;
    }

private:
    float marks;
};

int main()
{
    // Student s1;
    Student s1("Absar", 44, 99.9);
    s1.setMarks(88.8);
    cout << s1.getMarks() << endl;

    return 0;
}