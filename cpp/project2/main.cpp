/* Angelo Edward
 * 1/24/2024
 * Project2 */

#include <iostream>

using namespace std;

int main(){
    int totalSurveyed = 15500; // Total number of customers surveyed for a soft drink company
    float PercentWhoPurchase = .15; // Approximate percent of people who purchase 1 or more soft drinks per week
    int TotalWhoPurchase = totalSurveyed * PercentWhoPurchase; // Total amount of people who purchase 1 or more soft drinks per week
    float PercentPreferCitrus = .57; // Approximate percent of people surveyed who prefer citrus flavored drinks
    int TotalPreferCitrus = TotalWhoPurchase * PercentPreferCitrus; // Total amount of people that purchase soft drinks and prefer citrus flavored

    // Calculations and output to show total amount surveyed and amount of people that purchase soft drinks as well as prefer citrus flavored drinks
    cout << "A soft drink company surveyed " << totalSurveyed << " customers and found that approximately " << TotalWhoPurchase << 
    " purchase 1 or more energy drinks per week.\n";
    cout << "Of the " << TotalWhoPurchase << " customers that purchase enrgy drinks weekly, approximately " << TotalPreferCitrus << 
    " prefer citrus-flavored." << endl;

    return 0;
}
