#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, string> studentAddress;

    studentAddress["CZ100"] = "Chennai";
    studentAddress["CZ200"] = "Bangalore";
    studentAddress["CZ500"] = "Delhi";

    cout << "Address of student with roll no CZ500 is: "
         << studentAddress["CZ500"] << endl;

    return 0;
}