#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random 5-digit combination
string generateRandomCombination() {
    string combination = "";
    for (int i = 0; i < 5; ++i) {
        char digit = '0' + rand() % 10;  // Random digit from '0' to '9'
        combination += digit;
    }
    return combination;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    string targetCombination = generateRandomCombination();
    string guess;

    cout << "Welcome Lockpick the game!" << endl;
    cout << "Please enter your combonation." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == targetCombination) {
            cout << "Lock has been sucsessfully been picked! " << targetCombination << endl;
            break;
        } else {
            cout << "INCORRECT! Please try again." << endl;
            targetCombination = generateRandomCombination(); // Change the combination
        }
    } while (true);

    return 0;
}
