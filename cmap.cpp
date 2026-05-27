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
    return 0;
}