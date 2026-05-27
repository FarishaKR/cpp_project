#ifndef RECOMMENDATION_ENGINE_H
#define RECOMMENDATION_ENGINE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "User.h"
#include "Restaurant.h"

using namespace std;

class Recommendation
{
public:
    MenuItem item;
    double score;

    Recommendation(MenuItem i, double s)
    {
        item = i;
        score = s;
    }
};

class RecommendationEngine
{
public:
    double calculateScore(User user, MenuItem item)
    {
        double score = 0;

        if (user.cuisine == item.cuisine)
            score += 40;

        if (user.spiceLevel == item.spiceLevel)
            score += 20;

        if (item.price <= user.budget)
            score += 15;

        score += item.rating * 5;

        score += item.popularity * 0.2;

        return score;
    }

    static bool compareRecommendation(Recommendation a,
                                      Recommendation b)
    {
        return a.score > b.score;
    }

    void recommend(User user,
                   vector<Restaurant> restaurants)
    {
        vector<Recommendation> recommendations;

        for (auto restaurant : restaurants)
        {
            for (auto item : restaurant.menu)
            {
                if (!item.available)
                    continue;

                double score = calculateScore(user, item);

                recommendations.push_back(
                    Recommendation(item, score));
            }
        }

        sort(recommendations.begin(),
             recommendations.end(),
             compareRecommendation);

        cout << "\n===== TOP FOOD RECOMMENDATIONS =====" << endl;

        int count = 0;

        for (auto rec : recommendations)
        {
            cout << "\nFood: " << rec.item.itemName << endl;
            cout << "Cuisine: " << rec.item.cuisine << endl;
            cout << "Price: Rs." << rec.item.price << endl;
            cout << "Rating: " << rec.item.rating << endl;
            cout << "Recommendation Score: "
                 << rec.score << endl;

            if (user.cuisine == rec.item.cuisine)
                cout << "Reason: Matches cuisine preference\n";

            count++;

            if (count == 5)
                break;
        }
    }
};

#endif
