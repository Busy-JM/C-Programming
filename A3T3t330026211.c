/*
 =============================================
 Name: A3T3t330026211.c
 Author: Jingming Zhang
 Version: 0.1
 Copyright: Your copyright notice
 Description: Find the 20th element in an required array, using recursion.
 ============================================= */
#include <stdio.h>
int find(int a); // Declare a function to find the element.

int main(int argc, const char * argv[]) {
    int num;
    num = find(20); // Call the function and assign the return value to a varriable.
    printf("%d\n",num); // Output the value
    return 0;
}

int find(int a){
    if (a == 1)      // Base case.
        return 1;
    if (a == 2)
        return 2;
    if (a == 0)
        return 0;
    
    return find(a - 3) + find(a - 2) + find(a - 1); // Recursive step, finally return the 20th element to the main function.
}

