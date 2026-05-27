#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> ageMap;
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    for (const auto& pair : ageMap) {
        cout << pair.first << " is " << pair.second << " years old." << endl;
    }
    string eldestName;
    int maxAge = 0;

    for (const auto& pair : ageMap) {
        if (pair.second > maxAge) {
            maxAge = pair.second;
            eldestName = pair.first;
        }
    }
    cout << eldestName << " is the eldest at " << maxAge << " years old." << endl;
    return 0;
}