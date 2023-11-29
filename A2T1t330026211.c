/*
=============================================
 Name: A2T1t330026211.c
 Author: Jingming Zhang
 Version: 0.1
 Copyright: All rights reserved
 Description: Write a program which can produce a special pattern
 ============================================= */
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a,b;//a is used to count the number of line, b is used to count the print time of each line.
    for (a=1;a<=7;a++) {
        for (b=1;b<=a;b++) {
            if (a%2!=0)
                printf("#");
            else
                printf("+");
                }
        printf("\n");
        }    //Print upper part
    for (a=6;a>=0; a--) {
        for (b=1;b<=a;b++) {
            if (a%2==0)
                printf("+");
            else
                printf("#");
        }
        printf("\n");
    }       //Print lower part.
    return 0;
}

