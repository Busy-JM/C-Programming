/*
=============================================
 Name: A2T3t330026211.c
 Author: Jingming Zhang
 Version:1.0
 Copyright: Your copyright notice
 Description: 3x+1 conjecture
 ============================================= */
#include<stdio.h>
int main(int argc, const char * argv[]){
    int n,m;
    printf("Input: ");
    scanf("%d",&n);
    printf("Output:\n");
    while(n!=1){
    if(n%2==0){
        m=n/2;
        printf("%d/2=%d\n",n,m);
        n=n/2;
        }
    else if(n%2!=0){
        m=(3*n+1);
        printf("3*%d+1=%d\n",n,m);
        n=(3*n+1);
        }
    }
    return 0;
}
