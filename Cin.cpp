#include <iostream>
#include <string>
using namespace std;

// Learning topic 7: cin in C++
// Taking different types of input from user 💬

int main() {
    int age;
    float height;
    string name;
    
    cout << "Enter your full name: ";
    getline(cin, name); 
 // takes full line, including spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in cm): ";
    cin >> height;

    cout << "\n--- Your Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;

   return 0;
}