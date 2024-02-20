#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    ifstream inputFile("scores.txt");
    ofstream outputFile("grades.txt");

    string name;
    int score;
    if (inputFile)
        while (inputFile >> name) {
            outputFile << "Name: " << name << endl;

            int sumOfScores = 0;
            int totalExams = 0;

            while (inputFile >> score) {
                outputFile << "Score: " << score << endl;
                sumOfScores += score;
                totalExams ++;
            }
            
        double averageScore = 0.0;
        if (totalExams > 0) {
            averageScore = static_cast<double>(sumOfScores) / totalExams;
        }

        outputFile << "Average exam score: " << fixed << setprecision(2) << averageScore << endl;

        inputFile.get();

        outputFile << endl;

        }
    
        inputFile.close();
        outputFile.close();
            
    return 0;
}

