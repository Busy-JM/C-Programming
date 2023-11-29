/*
=============================================
 Name: A2T4t330026211.c
 Author: Jingming Zhang
 Version:1.0
 Copyright: Your copyright notice
 Description:
 ============================================= */
#include<stdio.h>
int main(int argc, const char * argv[]){
    int a,d=1,n,i;
    float b=0,c=0;
    printf("How many scores do you have? ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&a);
        if (a>100||a<0) {
            printf ("Please input score in range [0,100].\n");
            d=0;
            break;
        }
        else if(a<=100&&a>=90)
            b++;
        else if(a<60&&a>=0)
            c++;
    }
    if (d!=0) {
        printf("The percentage of scores which are between 90 and 100 is %.2f%%\n",100*b/n);
        printf("The percentage of scores which are under 60 is %.2f%%\n",100*c/n);
    }
    return 0;
}

