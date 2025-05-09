/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum{
    BC, MGR, PHD
}eTyp;


typedef struct{
    char jmeno[60];
    unsigned int vek;
    eTyp studium;
}sStudent;







int main()
{
    
    char temp[60]={};
    sStudent mujstudent = {};
    
    
    
    const char *typyStudia[] = {"BC", "MGR", "PHD"};

    
    fgets(temp, 60, stdin);
    temp[strcspn(temp, "\n")] = '\0';
    strcpy(mujstudent.jmeno, temp);
    
    
    fgets(temp, 60, stdin);
    mujstudent.vek = atoi(temp);
    
    fgets(temp, 60, stdin);
    mujstudent.studium = atoi(temp);
    
    
    
    
  
    
   
    
    
    
printf("Student: %s, který má věk: %d, studuje na stupni: %s\n",
           mujstudent.jmeno, mujstudent.vek, typyStudia[mujstudent.studium]);    
    
    
    
    
    

    return 0;
}