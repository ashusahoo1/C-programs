/*WAP print all the odd number from 1 to 100 using function*/


#include <stdio.h>

// Function to print odd numbers from 1 to 100
void printOddNumbers() {
    for (int number = 1; number <= 100; number += 2) {
        printf("%d\n", number);
    }
}

// Main function
int main() {
    // Call the function to print odd numbers
    printOddNumbers();

    return 0;
}
