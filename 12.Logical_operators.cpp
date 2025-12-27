#include <iostream>
using namespace std;

// Learning topic 12: Logical operators in C++

int main() {

    // AND (&&) operator
    bool isWeekend = true;
    bool homeworkDone = true;

    if (isWeekend && homeworkDone) {
        cout << "You can go outside today!" << endl;
    }
    else {
        cout << "You cannot go outside today!" << endl;
    }

    // OR (||) operator
    bool friendsInsisting = true;
    bool feelingBored = false;

    if (friendsInsisting || feelingBored) {
        cout << "You can go outside today!" << endl;
    }
    else {
        cout << "You cannot go outside today!" << endl;
    }

    // NOT (!) operator
    bool healthy = true;

    if (!healthy) {
        cout << "You cannot go outside today!" << endl;
    }
    else {
        cout << "You can go outside today!" << endl;
    }

    return 0;
}