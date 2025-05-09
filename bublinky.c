/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sort(int *pole){
    int temp;
    for(int i = 0; i < 5-1; i++){
        for(int j = 0; j < 5 - 1 - i; j++){
            if(pole[j]>pole[j+1]){ //tady resim zda to chci asc nebo desc
                temp = pole[j];
                pole[j] = pole[j+1];
                pole [j+1] = temp;
            }
        }
    }
    
    
    
    
    
}






int main()
{


int pole[5]={};
    
    for(int i = 0; i<5; i++){ //cyklus pro nacteni cisel
     scanf("%d", &pole[i]);    //nacti cislo na i pozici v poli
        
    }
    
    
    sort(pole);
    printf("serazene pole je: \n");
    for(int i = 0; i<5; i++){
        
        printf("%d \n",pole[i] );
    }
    




    return 0;
}