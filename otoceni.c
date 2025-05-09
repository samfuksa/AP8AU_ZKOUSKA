/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void otoc(char *retezec){
    
    
    char temp;
    char *start = retezec;
    char *end = retezec + strlen(retezec) - 1;
    
    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start ++;
        end --;
        
    }
 
}

int main()
{
    
    
    
   char retezec[60] = {};
   
   fgets(retezec, 60, stdin);
   retezec[strcspn(retezec, "\n")] = '\0';
   
   printf("vas retezec je: %s \n", retezec);
    
    otoc(retezec);
    printf("vas otoceny retezec je: %s", retezec);
    

    return 0;
}