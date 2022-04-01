#include <stdio.h>
#include <string.h>

/* Defina uma função void strnoV (char s[]) que 
   retira todas as vogais de uma string.
*/

char eVogal(char c){
    return ( c == 'a' || c == 'A' ||
             c == 'e' || c == 'E' ||
             c == 'i' || c == 'I' ||
             c == 'o' || c == 'O' ||
             c == 'u' || c == 'U');
}


void strnoV (char s[]){
    
    int i, j=0;
    char aux[strlen(s)+1];
    
    for(i=0; s[i] != '\0'; i++){
        if(!eVogal(s[i])){
            aux[j] = s[i];
            j++;
        }
    }
    
    aux[j] = '\0';
    strcpy(s, aux);
    
}
