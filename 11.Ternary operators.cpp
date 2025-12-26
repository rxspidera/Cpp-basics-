#include <iostream>
using namespace std;

// Learning topic 11: Ternary operator in C++

int main() {
    bool rainyWeather = true;

    cout << (rainyWeather ? "Today's weather is rainy 💧"
                          : "Today's weather is fine!") 
         << endl;

    return 0;
}