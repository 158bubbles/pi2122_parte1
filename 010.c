#include <string.h>


char *mystrstr (char s1[], char s2[]) {
    
    int i, j = 0, pos = 0;
    
    if(s2[0] == '\0') return s1;
    
    for(i=0; s1[i] != '\0'; i++){
        
        if(s1[i] == s2[0]) pos = i;  //encontra o inicio de s2
        
        if(s1[i] == s2[j]) j++; //vai andando até o s2 chegar ao fim 
        
        if(s2[j] == '\0') return s1+pos;  //quando chega ao fim retorna a posição em s1
    }

    return NULL;
}
