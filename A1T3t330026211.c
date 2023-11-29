/*
=============================================
 Name: A1T3t330026211.c
 Author: Jingming Zhang
 Version:0.1
 Copyright: All rights reserved
 Description:N/A
 ============================================= */
#include <stdio.h>
int main(void){
    int number,a,b,c,d;
    scanf("%d",&number);//Input a number
    a=number/100;       //To get the first number
    b=(number % (a * 100))/10;//second number
    c=number % ((a*100)+b*10);//third one
    d=c*100+b*10+a; //reverse it
    printf("reveersed number: %d\n",d);//outnput
        return 0;
}
