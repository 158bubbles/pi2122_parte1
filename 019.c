#include <stdio.h>
#include <stdlib.h>

int sufPref (char s1[], char s2[]) 
{
    int i, j = 0, res = 0;
    
    for(i=0; s1[i]!='\0'; i++){
        if (s1[i]==s2[j]){
            res++;
            j++;
            
        } else {
            j = 0;
            res = 0;
        }    
    }
    
    return res;
}
