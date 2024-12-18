#include <stdio.h>
#include <stdlib.h>
 
// Function to generate the N-th number made only of prime digits
int generatePrimeDigitNumber(int n) {
    int count = 0;
    for (int i = 2; ; i++) {
        int num = i;
        int isPrimeDigits = 1;
 
        // Check if all digits are prime digits (2, 3, 5, 7)
        while (num > 0) {
            int digit = num % 10;
            if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
                isPrimeDigits = 0;
                break;
            }
            num /= 10;
        }
 
        if (isPrimeDigits) {
            count++;
            if (count == n) {
                return i;
            }
        }
    }
}
 
int main() {
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
 
    while (T--) {
        printf("Enter the value of N: ");
        scanf("%d", &N);
        int result = generatePrimeDigitNumber(N);
        printf("%d\n", result);
    }
 
    return 0;
}