#include "maiscentral.h"

int distanciaCentro (Posicao p){
    
    return (abs(p.x) + abs(p.y));
}


int maiscentral (Posicao pos[], int N) {
    int i, min = distanciaCentro(pos[0]), minPos = 0;
    
    for(i=0; i < N; i++){
        
        if(distanciaCentro(pos[i]) < min){
            min = distanciaCentro(pos[i]);
            minPos = i;
        }
    }
    
    return minPos;
}
