/*
=============================================
 Name: A3T1t330026211.c
 Author: jingming Zhang
 Version: 0.1
 Copyright: Your copyright notice
 Description: This is a program to calculate the product of two matrix multiple.
 ============================================= */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,r;
    int ma1[3][3] = {1,2,5,1,3,1,0,1,0};// Insert the first 3x3 matrix in to a table.
    int ma2[3][1] = {1,0,1}; // Insert the second 3x1 martix in to a table.
    for (i=0; i<=2; i++) {
        for (r=0; r<=2; r++) {  // Use loop to print out the result
            printf("%d ",ma1[i][r] * ma2[r][0]); // Follow the law of matrix multiplication.
        }
        printf("\n");
    }
    return 0;
}

