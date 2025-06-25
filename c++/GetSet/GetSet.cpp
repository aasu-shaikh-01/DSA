#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown tea";
        servings = 1;
        ingredients = {"Water", "tea leaves"};
    }

    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }
    // Getter
    string getTeaName()
    {
        return teaName;
    }
    // Setter
    void setTeaName(string name)
    {
        // logic
        teaName = name;
    }
    // Getter for servings
    int getServings()
    {
        return servings;
    }
    // Setter for servings
    void setServings(int serve)
    {
        servings = serve;
    }

    // Getter for ingre:
    vector<string> getIngredients()
    {
        return ingredients;
    }

    // Setter for ingre:
    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
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
    Chai chaiOne;
    chaiOne.setTeaName("Ginger tea");
    return 0;
}