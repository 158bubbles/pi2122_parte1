#include <stdio.h>

int bitsUm (unsigned int n){
    int r = 0;
    
    while(n!=0){
        if(n%2 == 0){
            n/=2;
        } else {
            n/=2;
            r++;
        }
    }
    
    return r;
}
