#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
public:
    // data members (attributes)
    string teaName;             // name of the tea
    int servings;               // Number of servings
    vector<string> ingredients; // list of ingredients for the tea

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
    Chai chaiOne;
    chaiOne.teaName = "Green Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "Tea_Leaves", "Milk", "Sugar"};
    chaiOne.displayChaiDetails();
    return 0;
}