#include <iostream>
#include <string>
using namespace std;

// Learning topic 3 : type aliases..
// Totally serious C++ program🧊!!

using dog = string;
using me = string;
using banana = string;

int main() {
    dog work = "Dog is debugging reality🦮";
    me odd_habit = "Reading every damn i see on roads..cz why not🍺";
    banana status = "Confused if its a fruit or variable🍌";

    cout << "What's dog so busy with?" << endl << work << endl;
    cout << "Share one of your habit: " << odd_habit << endl;
    cout << "Banana status: " << status << endl;

    cout << "\n Everything is fine. Absolutely fine. 🌀" << endl;
    return 0;
}