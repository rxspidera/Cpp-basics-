#include <iostream>
using namespace std;

//Learning topic 10: Switch-case in c++
//with cold sarcasm🧊

int main() {
    int choice;

    cout << "Choose an action (1-5):\n";

    cout << "1. Study\n";
    cout << "2. Sleep\n";
    cout << "3. Overthink\n";
    cout << "4. Procrastinate\n";
    cout << "5. Socialize (why tho?)\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "\nYou chose STUDY.\n";
            cout << "Respect. Your future self quietly sheds a tear of gratitude.\n";
            break;

        case 2:
            cout << "\nYou chose SLEEP.\n";
            cout << "Valid. The world can't disappoint you if you're unconscious.\n";
            break;

        case 3:
            cout << "\nYou chose OVERTHINKING.\n";
            cout << "Excellent. A free mental gym session... with no gains.\n";
            break;

        case 4:
            cout << "\nYou chose PROCRASTINATION.\n";
            cout << "Classic. Deadlines fear you. Not because you're strong—because you ignore them.\n";
            break;

        case 5:
            cout << "\nYou chose SOCIALIZING.\n";
            cout << "Bold move. Human interaction is basically a side quest.\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
            cout << "Either learn numbers… or accept the chaos within.\n";
            break;
    }

    return 0;
}