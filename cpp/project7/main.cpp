/* Angelo Edward
 * CIS 170
 * Project7
 */
#include <iostream>

using namespace std;

const int ANSWERS = 10;

// Function to fill empty user answer array
void fillAnswers(char answerKey[ANSWERS], char userAnswers[ANSWERS], int ANSWERS) {
    cout << "Answer the following questions with A, B, C, or D.\n" << "You must answer 7 out of 10 questions correctly to pass." << endl;
    for (int i = 0; i < ANSWERS; i++) {
        cout << "Enter answer for question " << i + 1 << ": ";
        cin >> userAnswers[i];

    // Validate user input
    while(userAnswers[i] != 'A' && userAnswers[i] != 'B' && userAnswers[i] != 'C' && userAnswers[i] != 'D') {
        cout << "Invalid answer. Please enter a valid answer, A, B, C, or D: ";
        cin >> userAnswers[i];
        }
    }
}

// Function to display incorrect answers
void incorrectAnswers(char answerKey[ANSWERS], char userAnswers[ANSWERS], int ANSWERS, int correctAnswers) {
    for (int i = 0; i < ANSWERS; i++) {
        if (userAnswers[i] != answerKey[i]) {
            cout << "Incorrect answer for question " << i + 1 << ": " << userAnswers[i] << endl;
        }
    }
}

// Function to pass or fail and show number of correct and incorrect answers
void passOrFail(char answerKey[ANSWERS], char userAnswers[ANSWERS], int ANSWERS, int correctAnswers) {
   if (correctAnswers > 6) {
       cout << "You passed by getting " << correctAnswers << " correct, and missing " << ANSWERS - correctAnswers << "!" << endl;
       incorrectAnswers(answerKey, userAnswers, ANSWERS, correctAnswers);
   } else {
       cout << "You failed by getting " << correctAnswers << " correct, and missing " << ANSWERS - correctAnswers << "." << endl;
       incorrectAnswers(answerKey, userAnswers, ANSWERS, correctAnswers);
   } 
}

int main() {
    char answerKey[ANSWERS] = {'B', 'D', 'A', 'B', 'C', 'C', 'B', 'A', 'C', 'D'};
    char userAnswers[ANSWERS];
    int correctAnswers = 0;

    // Call fill answers function to fill user answer array
    fillAnswers(answerKey, userAnswers, ANSWERS);

    // Calculate correct answers for pass or fail function
    for(int i = 0; i < ANSWERS; i++) {
        if(userAnswers[i] == answerKey[i]) {
            correctAnswers++;
        }
    }

    // Call pass or fail function
    passOrFail(answerKey, userAnswers, ANSWERS, correctAnswers);

    return 0;
}
