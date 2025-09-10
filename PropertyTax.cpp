//******************************************************************
// Property Tax Program
// Programmer: Jonathan Oyervides
// Completed : 09/21/2024
// Status : Complete

// Did your program pass the testing? : Yes
// Did your program meet the requirements? : Yes

// This program computes the assessed value of a property and the 
// annual property tax based on the actual value of the property and
// the tax rate per $100 of assessed value.
//******************************************************************

/*
I will abide by the ACC Honor code and answer these following questions with full integrity and honesty, 
I understand if I answer "False" to any of these questions, I will receive zero for this assignment.
1. My submission is my own work.
2. I promise not to share my work with anyone in any form.
3. I did not use any outside tools (including but not limited to AI chatbots) to complete the Lab assignment.
*/

#include <iostream>
#include <iomanip> // for setting precision

using namespace std;

// Main function to calculate and display assessed value and property tax
int main() {
    // Declare variables
    double actual_value;  // Holds the actual value of the property
    double tax_rate;      // Holds the tax rate per $100 of assessed value
    double assessed_value; // Calculated assessed value of the property (60% of actual value)
    double property_tax;   // Calculated property tax based on assessed value and tax rate

    // Input section: Get the actual value of the property and the tax rate from the user
    cout << "Enter the actual property value: ";
    cin >> actual_value;
    cout << "Enter the amount of tax per $100 of assessed value: ";
    cin >> tax_rate;

    // Processing section: Calculate assessed value and property tax
    assessed_value = actual_value * 0.60;  // Calculate assessed value (60% of actual value)
    property_tax = (assessed_value / 100) * tax_rate;  // Calculate property tax

    // Output section: Display the property value, assessed value, and annual property tax
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "\nProperty value:    $" << actual_value << endl;
    cout << "Assessed value:    $" << assessed_value << endl;
    cout << "Property tax:      $" << property_tax << endl;

    return 0;
}
