/* Angelo Edward
 * 1/27/2024
 * Home Practice 3 
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    // Initialize Variables
    const int monthsInYear = 12;
    double numberOfPayments, loanAmount, yearlyRate; 

    // Collect User Input for Calculations
    cout << "What is your total loan amount? " << endl;
    cin >> loanAmount;
    cout << "How much is your annual interest rate in percent? " << endl;
    cin >> yearlyRate;
    cout << "How many payments is your loan for? " << endl;
    cin >> numberOfPayments;

    // Calculations for output
    double monthlyRate = (yearlyRate / 100) / monthsInYear;
    double monthlyPayment = (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) / (pow(1+ monthlyRate, numberOfPayments) - 1) * loanAmount;
    double amountPaid = ((monthlyPayment * monthlyRate) * numberOfPayments) * 100;
    double interestPaid = amountPaid - loanAmount;

    // Set Currency Values to 2 decimals
    cout << setprecision(2) << right << fixed;

    // Adjusted output from calculations
    cout << "Loan Amount: " << setw(15) << "$ " << loanAmount << endl;
    cout << "Monthly Interest Rate : " << setw(11) << static_cast<int>(monthlyRate * 100) << "%" << endl;
    cout << "Number of Payments: " << setw(16) << static_cast<int>(numberOfPayments) << endl;
    cout << "Monthly Payment: " << setw(13) << "$   " << monthlyPayment << endl;
    cout << "Amount Paid Back: " << setw(10) << "$ " << amountPaid << endl;
    cout << "Interest Paid: " << setw(14) << "$  " << interestPaid << endl;

    return 0;
}
