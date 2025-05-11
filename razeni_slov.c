/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char pole[5][256] = {};
    
    for(int i = 0; i<5; i++){
        
        fgets(pole[i], 256, stdin);
        pole[i][strcspn(pole[i],"\n")] = '\0';
    }
    char temp[256];
    for(int i = 0; i<5-1; i++){
        for (int j = 0; j < 5-1-i; j++)
        {
            if(strcmp(pole[j], pole[j+1]) > 0){
                
                strcpy(temp, pole[j]);
                strcpy(pole[j], pole[j+1]);
                strcpy(pole[j+1], temp);
                
                
                
                
            }
        }
    }
    
    
    for(int i = 0; i<5; i++){
        
        printf("%s \n", pole[i]);
        
    }
    

    return 0;
}
