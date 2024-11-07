#include <stdio.h>
 
// Function to convert the index to the nth number using digits 1, 4, 6, 9
void generateNthNumber(int N) {
    int digits[4] = {1, 4, 6, 9};
    int result[32]; // To store the digits of the number (large enough to hold up to 32 digits)
    int index = 0;
 
    // Convert N-1 to base-4 and map to digits 1, 4, 6, 9
    N--; // Adjust to 0-based index
    while (N >= 0) {
        result[index++] = digits[N % 4];
        N = (N / 4) - 1; // Move to the next significant digit
    }
 
    // Print the number in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}
 
int main() {
    int T, N;
    
    // Reading the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Reading the value of N for each test case
        scanf("%d", &N);
        
        // Generate and print the nth number
        generateNthNumber(N);
    }
    
    return 0;
}