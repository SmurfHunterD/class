/* Angelo Edward
 * 2/24/24
 * Project 6
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void showMenu();
void showDiscounts(double, int);


int main(){
    // Variables for menu choices
    int choice, months, age;

    // Constants for menu choice
    const int regularRateChoice = 1,
              seniorDiscountChoice = 2,
              yearlyDiscountChoice = 3,
              sessionDiscountChoice = 4,
              quitMenu = 5;

    // Constants for Member Rates in Menu
    const double regularRate = 50.0;    
    const double seniorDiscount = (regularRate * months) * 0.35; // discount for 55 years of age or older
    const double yearDiscount = (regularRate * months) * 0.20; // discount for 12 months or more
    const double sessionDiscount = (regularRate * months) * 0.15; // discount for 5 sessions or more

    // Set up file to write to
    ofstream outputFile("membership.txt");

    // Set up formatting for output
    cout << fixed << showpoint << setprecision(2);
    
    do {
        showMenu();
        cin >> choice;

        while (choice < regularRateChoice || choice > quitMenu) {
            cout << "Please enter a valid choice: ";
            cin << choice;
        }

        if (choice != quitMenu) {
            cout << "Enter your age ";
            cin age;
            cout << "For how many months? ";
            cin months;
            
        switch (choice) {
            case regularRateChoice:
                showFees()
        }
        }

    return 0;
}



// showMenu function that will display menu

void showMenu(){
    cout << "Welcome to the fitness Center Membership Discount Menu\n" 
        << "1. Regular monthly rate for 5 months or less - $50\n"
        << "2. Discount rate for Seniors, age 55+ - 35%\n"
        << "3. Discount rate for 12 months or more - 20%\n"
        << "4. Discount Rate for 5 sessions or more - 15%\n"
        << "Enter your choice: ";
}

void showFees(double memberRate, int months){
    cout << "the total amount will be $"
        << (memberRate * months) << endl;
}
