/*
=============================================
 Name: A1T2t330026211.c
 Author: Jingming Zhang
 Version: 0.1
 Copyright: All rights reserved
 Description:
 ============================================= */
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c); //Input three digit
    if (a<=0||b<=0||c<=0) {   //Negative numbers are forbidden
        printf("Please input positive numbers!\n");
    }
    else{                    //If the inputs are qualified
        if (a*a+b*b==c*c) {printf("This is a right-angled triangle!\n");}
        if (a*a+c*c==b*b) {printf("This is a right-angled triangle!\n");}
        if (b*b+c*c==a*a) {printf("This is a right-angled triangle!\n");}
    }
    return 0;
}

