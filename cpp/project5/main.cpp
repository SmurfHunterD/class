#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream inputFile("scores.txt");
    ofstream outputFile("grades.txt");

    // Initialize variables
    string firstName, lastName;
    double totalScore;
    int totalExams, score;
    double averageScore = 0.0;

    while (inputFile >> firstName >> lastName) {
        outputFile << firstName << " " << lastName;

        totalScore = 0;
        totalExams = 0;  

        // Read scores for current student
        while (inputFile >> score) {
            outputFile << " " << score;
            totalScore += score;
            totalExams++;
        }
        
        // Calculate average score for the current student
        averageScore = totalScore / totalExams;
        
        // Write average score to file 
        outputFile << " " << fixed << setprecision(2) << averageScore << endl;
    }

    inputFile.close();
    outputFile.close();
    return 0;
}

