#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <vector>
using namespace std;

class MenuItem
{
public:
    int itemId;
    string itemName;
    string cuisine;
    string spiceLevel;
    double price;
    double rating;
    int popularity;
    bool available;

    MenuItem() {}

    MenuItem(int id, string name, string c, string s,
             double p, double r, int pop, bool a)
    {
        itemId = id;
        itemName = name;
        cuisine = c;
        spiceLevel = s;
        price = p;
        rating = r;
        popularity = pop;
        available = a;
    }
};

class Restaurant
{
public:
    string restaurantName;
    vector<MenuItem> menu;

    Restaurant() {}

    Restaurant(string name)
    {
        restaurantName = name;
    }

    void addMenuItem(MenuItem item)
    {
        menu.push_back(item);
    }

    void displayMenu()
    {
        cout << "\n===== " << restaurantName << " MENU =====" << endl;

        for (auto item : menu)
        {
            if (item.available)
            {
                cout << item.itemId << " - "
                     << item.itemName << " | "
                     << item.cuisine << " | "
                     << item.spiceLevel << " | Rs."
                     << item.price << " | Rating: "
                     << item.rating << endl;
            }
        }
    }
};

#endif

