/*
=============================================
 Name: A1T4t330026211.c
 Author:Jingming Zhang
 Version:0.1
 Copyright: All rights reserved
 Description:N/A
 ============================================= */
#include <stdio.h>
int main(int argc, const char * argv[]) {
    char chr1,chr2;
    scanf("%c %c",&chr1,&chr2); //Input two char from keyboard
    if (((chr1<'A')||(chr1>'Z'&&chr1<'a')||(chr1>'z'))||(chr2<'A')||((chr2>'Z'&&chr2<'a')||(chr2>'z'))){  //This function is used to tell whether the inputs are correct type.
        if ((chr1<'A')||(chr1>'Z'&&chr1<'a')||chr1>'z'){
            if ((chr2<'A')||(chr2>'Z'&&chr2<'a')||chr2>'z'){
                printf("Warning! '%c' '%c' are not English letter.\n",chr1,chr2);}
            else printf("Warning! '%c' is not an English letter.\n",chr1);
        }
        else if ((chr2<'A')||(chr2>'Z'&&chr2<'a')||chr2>'z'){
            if ((chr1<'A')||(chr1>'Z'&&chr1<'a')||chr1>'z'){
                printf("Warning! '%c' '%c' are not English letter.\n",chr1,chr2);}
            else
                printf("Warning! '%c' is not an English letter.\n",chr2);}
    }
    else {   //This function will be actioned if the inputs are correct.
        if ((chr1>='A'&&chr1<='Z')||(chr2>='A'||chr2<='Z')){ //If there are Capitalized Character in the input
            if (chr1>='A'&&chr1<='Z'&&(chr2>='a')) {
                chr1=(char)((int)(chr1)+32);
                if (chr2>chr1){
                    chr1=(char)((int)chr1-32);
                    printf("%c %c\n",chr1,chr2);
                }
                else if(chr1==chr2){
                    chr1=(char)((int)chr1-32);
                    printf("%c %c",chr1,chr2);
                }
                else{
                    chr1=(char)((int)chr1-32);
                    printf("%c %c\n",chr2,chr1);}
            }
            else if (chr2>='A'&&chr2<='Z'&&(chr1>='a')) {
                chr2=(char)((int)(chr2)+32);
                if (chr2>chr1){
                    chr2=(char)((int)chr2-32);
                    printf("%c %c\n",chr1,chr2);}
                else if (chr1==chr2){
                    chr2=(char)((int)chr2-32);
                    printf("%c %c\n",chr1,chr2);}
                else{
                    chr2=(char)((int)chr2-32);
                    printf("%c %c\n",chr2,chr1);}
            }
            else {
                if (chr2>chr1)
                    printf("%c %c\n",chr1,chr2);
                else
                    printf("%c %c\n",chr2,chr1);}
        }
        /*Above segmant is to change the capitalized
         characterto compare with the other one in a
         certain way,then out put the correct order
         in its original type */
        else{  //If the both character are in same formate
            if (chr2>chr1)
                printf("%c %c\n",chr1,chr2);
            else
                printf("%c %c\n",chr2,chr1);
        }
    }
    return 0;
}
