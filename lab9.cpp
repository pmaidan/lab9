// Polina Maidanova
// Programming Fudamentals
// CS 1436
// 005
// Due Date: 10/04/2024
// Date Completed: 09/26/2024
// Date Submitted: 10/03/2024


// This program calculates the percentage of calories from fat of the total number of calories.

#include <iostream> // Header file allowing the use of input/output objects.
#include <iomanip>  // Header file allowing the output manipulations.
using namespace std;    // Use the standard namespace.

int main()  // Main function is the starting point of the program execution.
{
    // Initialize the constant number of calories in one gram of fat.
    const double FAT_GRAM_CALORIES = 9.0;   

    // Declare the variables for the number of fat grams, total calories, fat calories, and the percentage of fat calories in a meal.
    double fFatGrams, fTotalCalories, fFatCalories, fFatCaloriesPercentage;

    // Get the user's input for the number of total calories in the meal.
    cout << "Enter the number of calories in the meal: ";
    cin >> fTotalCalories;

    // Get the user's input for the number of fat grams in the meal.
    cout << "Enter the number of fat grams in the meal: ";
    cin >> fFatGrams;

    // Check if the user's input is valid.
    if (fTotalCalories < 0.0 || fFatGrams < 0.0)
    {
        cout << "Invalid input. Please enter non-negative numbers.\n";  // Display the error message.
        return 1;   // Return 1 and terminate the program if the user's input for total calories or fat grams is less than zero.
    }

    // Calculate the number of fat calories and the percentage of fat calories in the meal.
    fFatCalories = fFatGrams * FAT_GRAM_CALORIES;
    fFatCaloriesPercentage = fFatCalories / fTotalCalories * 100.0;

    // Check if the number of fat calories is lower than the number of total calories, indicating that the user's input was valid.
    if (fFatCaloriesPercentage > 100.0)
    {
        cout << "Error. The number of total calories or the number of fat grams entered is incorrect.\n";   // Display the error message.
        return 2;   // Return 2 and terminate the program if the user entered wrong number of calories or fat grams, with fat calories exceeding total calories.
    }

    // Check if the fat calories percentage is lower than 30%, indicating that the meal is low in fat.
    if (fFatCaloriesPercentage < 30.0)   // Check if the fat calories percentage is greater than 30%.
    {
        cout << fixed << setprecision(2);   // Display the result to 2 decimal places.
        cout << "The percentage of calories that come from fat is " << fFatCaloriesPercentage << "%.";   // Display the percentage of fat calories.
        cout << " The meal is low in fat."; // Display the message that the food is low in fat.
    }
    else    // If the fat calories percentage is greater than 30%, display the percentage of fat calories.
    {
        cout << fixed << setprecision(2);   // Display the result to 2 decimal places.
        cout << "The percentage of calories that come from fat is " << fFatCaloriesPercentage << "%.";
    }

    return 0;   // Return 0 to indicate the program completed successfully.
}
