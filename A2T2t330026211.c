/*
=============================================
 Name: A2T2t330026211.c
 Author: Jingming Zhang
 Version: 0.1
 Copyright: All rights reserved
 Description: N/A
 ============================================= */

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int k,a,b,i,count1,count2;
    //k is every even number under 100, a and b are right hand prime number in the printed equation.
    for(k=4;k<=100;k=k+2) //Start with the first odd number and finish in the last one below 100
    {
        for(a=2;a<=k/2;a++) // Determine whether a is a prime nuumber
        {
            count1=0;
            for(i=2;i<=a-1;i++)
            {
                if(a%i==0)
                {
                    count1++;
                    break;
                }
            }
            if(count1==0) // determine b after a is a prime number.
            {
                b=k-a;
                count2=0;
                for(i=2;i<=b-1;i++) //Determine whether b is a prime number.
                {
                    if(b%i==0)
                    {
                        count2++;
                        break;
                    }
                }
                if(count2==0){
                    printf("%d=%d+%d",k,a,b); //print the result
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}

