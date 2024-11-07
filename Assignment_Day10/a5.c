

#include <stdio.h>
 

void printSpaces(int val, int it) 
{
    for (int j=0; j<val-it; j++) 
    {
        printf(" ");
    }
}
 

void printIncreasingSeq(int it, char startChar)
{
    for (int j=0; j<it; j++) {
        printf("%c", startChar + j);
    }
}
 

void printDecreasingSeq(int it, char startChar)
{
    for (int j=it-2; j>= 0; j--) {
        printf("%c", startChar + j);
    }
}
 
//  Alphabet Triangle
void printAlphabetTriangle(int val) 
{
    for (int it=1; it<= val; it++) 
    {
        printSpaces(val, it);                   
        printIncreasingSeq(it, 'A');      
        printDecreasingSeq(it, 'A');      
        printf("\n");
    }
}
 
//  Number Triangle
void printNumTriangle(int val) 
{
    for (int it=1; it<= val; it++) {
        printSpaces(val, it);                    
        printIncreasingSeq(it, '1');      
        printDecreasingSeq(it, '1');     
        printf("\n");
    }
}
 
int main() {
    int val;
    printf("Enter the number of rows: ");
    scanf("%d", &val);
    printf("\nAlphabet Triangle:\n");
    printAlphabetTriangle(val);
    printf("\nNum Triangle:\n");
    printNumTriangle(val);
 
    return 0;
}
 