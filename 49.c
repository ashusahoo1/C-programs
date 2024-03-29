/*WAP to convert lower case to upper case character*/



#include <stdio.h>

// Function to convert lowercase to uppercase


char convertToLowerToUpper(char lowercase) {



    // Check if the character is a lowercase letter


    if (lowercase >= 'a' && lowercase <= 'z') {


        // Convert to uppercase by subtracting the ASCII difference


        return lowercase - ('a' - 'A');
    } else {


        // If the character is not a lowercase letter, return it unchanged

        
        return lowercase;
    }
}

int main() {
    char lowercaseChar, uppercaseChar;

    // Get input from the user
    printf("Enter a lowercase character: ");
    scanf(" %c", &lowercaseChar);

    // Call the function to convert to uppercase
    uppercaseChar = convertToLowerToUpper(lowercaseChar);

    // Display the result
    printf("Uppercase: %c\n", uppercaseChar);

    return 0;
}
