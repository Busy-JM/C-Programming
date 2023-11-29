/*
 =============================================
 Name: A3T4t330026211.c
 Author: Jingming Zhang
 Version: 0.1
 Copyright: Your copyright notice
 Description: Compute the number of 0’s in the input number's binary representation.
 ============================================= */
#include <stdio.h>

int ZeroInBinary(int n);// Declare a recursive function to calculate the amount of 0.

int main(int argc, const char * argv[]) {
    int n;
    printf("Input: ");
    scanf("%d",&n);        // Input the number needed to be calcualte.
    n = ZeroInBinary(n);   // Call the recursive function.
    printf("Output: %d\n",n);
    return 0;
}

int ZeroInBinary(int n){
    if (n == 0)           // Set base case.
        return 0;
    
    if (n % 2 == 0)     // Recursive Step.
        return 1 + ZeroInBinary(n / 2);
    else
        return ZeroInBinary(n / 2);
}

