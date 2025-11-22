#include <iostream>
#include <string>
invclude <cmath>
using namespace std;

//Learning topic 9:If else statements in c++
//I'd like to let ppl question their sanity♦️

int main() {
    double score;
    int final_score = round(score);

    cout << "Enter your exam score: ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "You entered a score outside reality." << endl;
        cout << "I respect the curiosity, but math disagrees." << endl;
    }
    else if (score >= 90) {
        cout << "Top tier." << endl;
        cout << "People will call you gifted. You and I know it's just discipline🧊." << endl;
    }
    else if (score >= 75 && score < 90) {
        cout << "Good. Not legendary, but you won't cry either." << endl;
    }
    else if (score >= 50 && score < 75) {
        cout << "Passable." << endl;
        cout << "You survived. Evolution approves." << endl;
    }
    else if (score >= 33 && score < 50) {
        cout << "Barely made it💧." << endl;
        cout << "The academic equivalent of 'fine, whatever'☕." << endl;
    }
    else { 
        cout << "Below pass." << endl;
        cout << "At least you gained character development.🧩" << endl;
    }

    return 0;
}