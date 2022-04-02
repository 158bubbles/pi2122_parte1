#include <string.h>

int palindroma (char s[]) {
    int i, j;
    
    for(i=0, j=strlen(s)-1; s[i] != '\0'; i++, j--){
    
        if(s[i] != s[j]) return 0;
    }
    return 1;
}
