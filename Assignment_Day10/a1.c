#include <stdio.h>
#include <stdbool.h>
 
 
bool is_prime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}
 
// pairs upto n//
int find_prime_pairs(int n) \
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++) 
    {
        if (is_prime(i) && is_prime(n - i)) 
        {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
    return count;
}
 
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
 
    int ways = find_prime_pairs(n);
    if (ways == 0)
    {
        printf("No prime pairs found for %d.\n", n);
    } 
    else
    {
        printf("NoofWays = %d\n", ways);
    }
 
    return 0;
}
 