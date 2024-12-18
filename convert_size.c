#include <stdio.h>
#include <math.h>
// Function to convert size in cm to feet and inches
void convert_size(int t)
{
    int feet, inches;

    // 1 foot = 30.48 cm, 1 inch = 2.54 cm
    feet = t / 30.48;                          // Truncate the feet value
    inches = round((t - (feet * 30.48)) / 2.54); // Remaining cm converted to inches (rounding for precision)

    // Adjust for cases where inches reach 12 (1 foot)
    if (inches == 12) {
        feet++;
        inches = 0;
    }

    // Print results
    printf("Foot number = %d\n", feet);
    printf("Inch number = %d\n", inches);
}

int main(void)
{
    int input;

    // Prompt user for input
    printf("Enter your size in cm: ");
    scanf("%d", &input);

    // Convert and display results
    convert_size(input);

    return 0; // Indicate successful program termination
}

