#include <iostream>
#include <vector>
#include <fstream>
#include "User.h"
#include "Restaurant.h"
#include "RecommendationEngine.h"

using namespace std;

void saveUser(User user)
{
    ofstream file("data/users.txt", ios::app);

    file << user.id << ","
         << user.name << ","
         << user.cuisine << ","
         << user.spiceLevel << ","
         << user.budget << endl;

    file.close();
}

int main()
{
    cout << "===== FOOD RECOMMENDATION SYSTEM =====\n";

    int id;
    string name;
    string cuisine;
    string spice;
    double budget;

    cout << "Enter User ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Preferred Cuisine: ";
    getline(cin, cuisine);

    cout << "Spice Preference (Low/Medium/High): ";
    getline(cin, spice);

    cout << "Enter Budget: ";
    cin >> budget;

    User user(id, name, cuisine, spice, budget);

    saveUser(user);

    user.displayProfile();

    Restaurant r1("Spice Hub");

    r1.addMenuItem(MenuItem(1, "Biryani",
                            "Indian", "High",
                            250, 4.5, 90, true));

    r1.addMenuItem(MenuItem(2, "Butter Chicken",
                            "Indian", "Medium",
                            300, 4.7, 85, true));

    r1.addMenuItem(MenuItem(3, "Paneer Tikka",
                            "Indian", "Medium",
                            220, 4.4, 80, true));

    Restaurant r2("Dragon Wok");

    r2.addMenuItem(MenuItem(4, "Noodles",
                            "Chinese", "Low",
                            180, 4.2, 70, true));

    r2.addMenuItem(MenuItem(5, "Fried Rice",
                            "Chinese", "Medium",
                            200, 4.3, 75, true));

    r2.addMenuItem(MenuItem(6, "Manchurian",
                            "Chinese", "High",
                            210, 4.6, 82, true));

    Restaurant r3("Italiano Pizza");

    r3.addMenuItem(MenuItem(7, "Margherita Pizza",
                            "Italian", "Low",
                            350, 4.5, 88, true));

    r3.addMenuItem(MenuItem(8, "White Sauce Pasta",
                            "Italian", "Medium",
                            320, 4.4, 76, true));

    vector<Restaurant> restaurants;

    restaurants.push_back(r1);
    restaurants.push_back(r2);
    restaurants.push_back(r3);

    RecommendationEngine engine;

    engine.recommend(user, restaurants);

    cout << "\nThank You for Using the System\n";

    return 0;
}

