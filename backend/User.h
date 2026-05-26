#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
using namespace std;

class User
{
public:
    int id;
    string name;
    string cuisine;
    string spiceLevel;
    double budget;

    User() {}

    User(int i, string n, string c, string s, double b)
    {
        id = i;
        name = n;
        cuisine = c;
        spiceLevel = s;
        budget = b;
    }

    void displayProfile()
    {
        cout << "\n===== USER PROFILE =====" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Cuisine: " << cuisine << endl;
        cout << "Spice Level: " << spiceLevel << endl;
        cout << "Budget: " << budget << endl;
    }
};

#endif
