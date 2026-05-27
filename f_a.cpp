#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

    stack<int, vector<int>> stackVector;

    stackVector.push(1);
    stackVector.push(2);
    stackVector.push(3);
    stackVector.push(4);

    cout << "Top element: " << stackVector.top() << endl;

    cout << "Size of stack: " << stackVector.size() << endl;

    cout << "\nElements in stack are:" << endl;

    while (!stackVector.empty()) {

        cout << stackVector.top() << endl;

        stackVector.pop();
    }

    if (stackVector.empty()) {
        cout << "\nStack is now empty." << endl;
    }

    return 0;
}