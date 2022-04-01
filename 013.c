#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Defina uma função 
   void truncW (char t[], int n) 
   que dado um texto t com várias palavras 
   (as palavras estão separadas por um ou 
   mais espaços) e um inteiro n, trunca 
   todas as palavras de forma a terem no 
   máximo n caracteres.
*/

void truncW (char s[], int n){
    int i, j = 0, k = 0;
    char aux[strlen(s)+1];
    
    for(i=0; s[i] != '\0'; i++){
        
        if(s[i] == ' '){
            j=0;
            aux[k] = s[i];
            k++;
        } else {
            if(j < n){
                aux[k] = s[i];
                k++;
            }
            j++;
        }
    }
    
    aux[k] = '\0';
    strcpy(s, aux);
}
