#include "vizinhos.h"

int vizinhos (Posicao p, Posicao pos[], int N) {
    int i, count = 0;
    
    for(i=0; i < N; i++){
        
        if((pos[i].x == p.x) && (pos[i].y == p.y +1)) count++;
        else if((pos[i].x == p.x) && (pos[i].y == p.y -1)) count++;
        else if((pos[i].x == p.x +1) && (pos[i].y == p.y)) count++;
        else if((pos[i].x == p.x -1) && (pos[i].y == p.y)) count++;
    }
    
    
    
    return count;
}
