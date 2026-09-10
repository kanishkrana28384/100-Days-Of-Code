//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int num, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0}; // Array to store the count of each digit
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Handle negative numbers
    if(num < 0) {
        num = -num;
    }
    // Count the occurrences of each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    // Find the digit with the maximum count
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    printf("The digit that occurs the most times is: %d\n", maxDigit);
    return 0;
}