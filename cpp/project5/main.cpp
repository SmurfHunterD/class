#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream inputFile("scores.txt");
    ofstream outputFile("grades.txt");

    string firstName, lastName;
    int score, totalScore, totalExams;

    while (inputFile >> firstName >> lastName) {
        outputFile << firstName << " " << lastName << endl;

        totalScore = 0;
        totalExams = 0;

        while (inputFile >> score) {
            outputFile << score << " ";
            totalScore += score;
            totalExams++;
        }

        double averageScore = 0.0;
        averageScore = static_cast<double>(totalScore) / totalExams;

        outputFile << endl << "Average Score: " << fixed << setprecision(2) << averageScore << endl;

        // Clear error flags
        inputFile.clear();

        // Read and clear newline character
        inputFile.get();
    }

    inputFile.close();
    outputFile.close();
}
