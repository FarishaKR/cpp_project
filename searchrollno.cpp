#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, string> studentAddress;

    studentAddress["CZ100"] = "Chennai";
    studentAddress["CZ200"] = "Bangalore";
    studentAddress["CZ300"] = "Hyderabad";
    studentAddress["CZ400"] = "Mumbai";
    studentAddress["CZ500"] = "Delhi";

    cout << "Student Records:" << endl;

    for (const auto& pair : studentAddress) {
        cout << "Roll No: " << pair.first
             << " -> Address: " << pair.second << endl;
    }

    cout << endl;

    
    cout << "Address of student with roll no CZ500 is: "
         << studentAddress["CZ500"] << endl;

    return 0;
}