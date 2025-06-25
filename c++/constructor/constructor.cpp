#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class Chai
// {
// public:
//     // data members (attributes)
//     string teaName;             // name of the tea
//     int servings;               // Number of servings
//     vector<string> ingredients; // list of ingredients for the tea
//     // Default constructor:
//     Chai()
//     {
//         teaName = "Green Tea";
//         servings = 2;
//         ingredients = {"Water", "Tea_Leaves", "Milk", "Sugar"};
//         cout << "Constructor called!" << endl;
//     }
//     // Member funtion
//     void displayChaiDetails()
//     {
//         cout << "Tea Name: " << teaName << endl;
//         cout << "servings: " << servings << endl;
//         cout << "Ingredients: ";
//         for (string ingredient : ingredients)
//         {
//             cout << ingredient << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     Chai chaiOne;
//     // chaiOne.teaName = "Green Teaaaa";
//     // chaiOne.servings = 222;
//     // chaiOne.ingredients = {"Waterrr", "Tea_Leavesss", "Milkkk", "Sugarrr"};
//     chaiOne.displayChaiDetails();
//     return 0;
// }

// class Chai
// {
// public:
//     // data members (attributes)
//     string teaName;             // name of the tea
//     int servings;               // Number of servings
//     vector<string> ingredients; // list of ingredients for the tea
//     // Paramter constructor:
//     Chai(string name, int serve, vector<string> ingre)
//     {
//         teaName = name;
//         servings = serve;
//         ingredients = ingre;
//         cout << "Parameter Constructor Called!" << endl;
//     }
//     // Member funtion
//     void displayChaiDetails()
//     {
//         cout << "Tea Name: " << teaName << endl;
//         cout << "servings: " << servings << endl;
//         cout << "Ingredients: ";
//         for (string ingredient : ingredients)
//         {
//             cout << ingredient << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     Chai chaiOne("Green Tea", 2, {"Water", "Tea_Leaves", "Milk", "Sugar"});
//     // chaiOne.teaName = "Green Teaaaa";
//     // chaiOne.servings = 222;
//     // chaiOne.ingredients = {"Waterrr", "Tea_Leavesss", "Milkkk", "Sugarrr"};
//     chaiOne.displayChaiDetails();
//     return 0;
// }

class Chai
{
public:
    // data members (attributes)
    string *teaName;            // name of the tea
    int servings;               // Number of servings
    vector<string> ingredients; // list of ingredients for the tea

    // Paramter constructor:
    Chai(string name, int serve, vector<string> ingre)
    {
        teaName = new string(name);
        servings = serve;
        ingredients = ingre;
        cout << "Parameter Constructor Called!" << endl;
    }

    Chai(const Chai &other)
    {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy constructor called!" << endl;
    }

    ~Chai()
    {
        delete teaName;
        cout << "Destructor called" << endl;
    }

    // Member funtion
    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};
int main()
{
    Chai chaiOne("Green Tea", 2, {"Water", "Tea_Leaves", "Milk", "Sugar"});
    chaiOne.displayChaiDetails();
    //    copy the object:
    Chai copiedChai = chaiOne;
    // copiedChai.displayChaiDetails();
    *chaiOne.teaName = "Modified chaiOne";
    copiedChai.displayChaiDetails();
    cout << "chaiOne" << endl;
    return 0;
}