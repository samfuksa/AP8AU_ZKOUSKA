/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sudost(int *pole){
    int pocet_su = 0;
    
    for (int i=0; i<5; i++){
        
        if(pole[i]%2!=0){//overeni zda je cislo sude pomoci zbytku
            pocet_su ++;
        } 
    }
    
    return pocet_su;
}


int main()
{
    
    int pole[5]={};
    
    for(int i = 0; i<5; i++){ //cyklus pro nacteni cisel
     scanf("%d", &pole[i]);    //nacti cislo na i pozici v poli
        
    }
    
    int pocet = sudost(pole);
    
    printf("Pocet sudych cisel je: %d", pocet);
    

    return 0;
}