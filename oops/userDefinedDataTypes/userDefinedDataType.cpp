#include <iostream>
using namespace std;

// // class for students:
// class Student // Student is a new data type.
// {
// public:
//     string name;
//     int rno;
//     float gpa;
// };

// class for cars:
class Car
{
public:
    string name;
    int price;
    int seats;
    string type;

    Car(int p, string n, int s, string t)
    {
        price = p;
        name = n;
        seats = s;
        type = t;
    };
};

// class for laptops:
// class laptop
// {
// public:
//     string name;
//     string processor;
//     string latitude;
//     int generation;
//     string storage;
//     string ram;
// };

// void print(laptop l)
// {
//     cout << l.name << endl
//          << l.generation << endl
//          << l.latitude << endl
//          << l.processor << endl
//          << l.ram << endl
//          << l.storage << endl
//          << "*************************************" << endl;
// }

void print(Car c)
{
    cout << c.name << endl
         << c.price << endl
         << c.seats << endl
         << c.type << endl;
}

// Pass by value:
// void change(laptop l)
// {
//     l.name = "BHEL";
// }

// Pass by reference:
// void change(laptop &l)
// {
//     l.name = "BHEL";
// }

int main()
{
    // Car c1("Sedan", 1500000, 7, "Hatchback");
    Car c1(1500000, "Sedan", 7, "Hatchback");
    print(c1);

    // Car c2;
    // c2.name = "toyota";
    // c2.price = 1500000;
    // c2.type = "Hatchback";
    // c2.seats = 5;

    // Object for students:
    // Student s1;
    // s1.name = "Md Absar";
    // s1.rno = 73;
    // // cin >> s1.rno; //We can also take input from user.
    // s1.gpa = 9;

    // Student s2;
    // s2.name = "Md Asif";
    // s2.rno = 74;
    // s2.gpa = 8;

    // cout << s1.name << endl
    //      << s1.rno << "\n"
    //      << s1.gpa << endl;

    // cout << s2.name << endl
    //      << s2.rno << "\n"
    //      << s2.gpa << endl;

    // Object for cars:

    // Car c1;
    // c1.name = "alto";
    // c1.price = 1000000;
    // c1.type = "SUV";
    // c1.seats = 7;

    // Car c2;
    // c2.name = "toyota";
    // c2.price = 1500000;
    // c2.type = "Hatchback";
    // c2.seats = 5;

    // cout << c1.name << endl
    //      << c1.price << endl
    //      << c1.type << endl
    //      << c1.seats << endl;

    // cout << c2.name << endl
    //      << c2.price << endl
    //      << c2.type << endl
    //      << c2.seats << endl;

    // Object for laptops:

    // laptop l1;
    // l1.name = "Dell";
    // l1.generation = 7;
    // l1.latitude = "E7070";
    // l1.processor = "i7";
    // l1.ram = "16gb";
    // l1.storage = "528GB";

    // print(l1);
    // change(l1);
    // print(l1);

    // laptop l2;
    // l2.name = "Lenevo";
    // l2.generation = 7;
    // l2.latitude = "E7080";
    // l2.processor = "i5";
    // l2.ram = "8gb";
    // l2.storage = "1012GB";

    // laptop l3;
    // l3.name = "Acer";
    // l3.generation = 7;
    // l3.latitude = "E7070";
    // l3.processor = "i7";
    // l3.ram = "16gb";
    // l3.storage = "528GB";

    // laptop l4;
    // l4.name = "hp";
    // l4.generation = 5;
    // l4.latitude = "E6770";
    // l4.processor = "i5";
    // l4.ram = "8gb";
    // l4.storage = "528GB";

    // cout << l1.name << endl
    //      << l1.generation << endl
    //      << l1.latitude << endl
    //      << l1.processor << endl
    //      << l1.ram << endl
    //      << l1.storage << endl;

    // Passing objects to function:
    // print(l1);
    // print(l2);
    // print(l3);
    // print(l4);
}