/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    
    char veta[256]={};
    int pocet = 1;
    
    fgets(veta,256,stdin); //nacteme vetu
    veta[strcspn(veta, "\n")] = '\0'; //odstranim enter na konci
    
    int delka = strlen(veta); //jak dlouhy je retezec
    printf("delka vety je: %d \n", delka);
    if(delka>0){
        
        for(int i = 0; i<delka; i++){
            if(veta[i] == ' '){
                pocet ++;
            }
        }
        printf("pocet slov ve vete je: %d", pocet);
    }
    
    else    {
        printf("ses idiot");
    }
    
    
    
    
    
    
    
    

    return 0;
}