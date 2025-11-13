#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Learning topic 8: Some math related functions in C++

int main() {
    double x = 4.0;
    double y = 3.0;
    double z = 56.78;
    
    cout << "x = 4.0" << endl << "y = 3.0" << endl << "z= 56.78" << endl << endl;
    
    cout << "Power (x,y): " << pow(x, y) << endl;
    cout << "Sqrt (x): " << sqrt(x) << endl;
    cout << "Abs(-7): " << abs(-7) << endl;
    cout << "Ceil(z): " << ceil(z) << endl;
    cout << "Floor(z): " << floor(z) << endl;
    cout << "Round(z): " << round(z) << endl;
    
    return 0;
}