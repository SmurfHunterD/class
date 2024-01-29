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
    int numberOfPayments;
    double loanAmount, amountPaidBack, yearlyRate, rate; 

    // Collect User Input for Calculations
    cout << "What is your total loan amount? " << endl;
    cin >> loanAmount;
    cout << "How much is your annual interest rate in percent? " << endl;
    cin >> yearlyRate;
    cout << "How many payments is your loan for? " << endl;
    cin >> numberOfPayments;

    // calculate monthly interest rate for monthly payment calculation
    double monthlyRate = (yearlyRate/100) / 12.0;
    double monthlyPayment = (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) / (pow(1+ monthlyRate, numberOfPayments) - 1) * loanAmount;
    double interestPaid = loanAmount / yearlyRate;

    // Set Currency Values to 2 decimals
    cout << setprecision(2) << right << fixed;

    // Calculations and output
    cout <<  "Loan Amount: " << setw(15) << "$ " << loanAmount << endl;
    cout << "Monthly Interest Rate : " << setw(11) << static_cast<int>(monthlyRate) << "%" << endl;
    cout << "Number of Payments: " << setw(16) << numberOfPayments << endl;
    cout << "Monthly Payment: " << setw(13) << "$ " << monthlyPayment << endl;
    cout << "Amount Paid Back: " << setw(10) << "$ " << loanAmount + interestPaid << endl;
    cout << "Interest Paid: " << setw(15) << "$ " << interestPaid << endl;

    return 0;
}
