/*
=============================================
 Name: A3T2t330026211.c
 Author: jingming Zhang
 Version: 0.1
 Copyright: Your copyright notice
 Description: This is program to find and print out all the prime numbers between 5 and 100.
 ============================================= */
#include <stdio.h>

_Bool isPrime(int n); // Declare a function to check whether the number is a prime or not.

int main(int argc, const char * argv[]) {
    int num = 5,judge;
    for (num=5; num<=100; num++) { // From 5 to 100.
        judge = isPrime(num); // Call the Check Function
        if (judge == 1)
            printf("%d is a prime\n",num);
    }
    return 0;
}

_Bool isPrime(int n){
    int i,count = 0;
    for (i=2; i<n; i++) { // Use loop to check whether the number is a prime.
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        return 1; //Return requried value 0 or 1.
    else
        return 0;
}

