#include <stdio.h>
#include <string.h>


char *mystrcat(char s1[], char s2[]) {
    
    int i = strlen(s1), j;
    
    for(j = 0; s2[j] != '\0'; j++){
        
        s1[i] = s2[j];
        i++;
    }
    
    return s1;
}
