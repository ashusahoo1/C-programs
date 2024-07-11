/* program to copy a data element to another in the same data structure and then find the number of vowels*/


#include <stdio.h>
#include <ctype.h>
void copyData(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
    }
int countVowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if (ch == 'a' , ch == 'e' , ch == 'i' , ch == 'o' , ch == 'u') {
            count++;
        }
    }
    return count;
}
int main() {
    
    char data1[] = "xyz";
    char data2[20];
    
            copyData(data2, data1);

    
    printf("Copied Data: %s\n", data2);

    
    int vowelCount = countVowels(data2);

    
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
    
}
