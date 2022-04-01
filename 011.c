#include <string.h>


void strrev (char s[]) {
    int i, j = 0;
    char aux[strlen(s)+1];
    
    for(i=strlen(s)-1; i >= 0; i--){
        
        aux[j] = s[i];
        j++;
    }
    aux[j] = '\0';
    i=0;
    
    for(i=0; aux[i] != '\0'; i++){
        
        s[i] = aux[i];
    }
    s[i] = '\0';
}
