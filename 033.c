int temRep(int v[], int N, int x){
    int i;
    for(i=0; i < N; i++){
        if(v[i] == x) return 1;
    }
    
    return 0;
}

int elimRep (int v[], int N) {
    int i, j;
       
    for(i=0; i < N; i++){
        if(temRep(v, N, v[i]) == 1){
            
            for(j=i; j < N; j++){
                v[j] = v[j+1];  //eliminou o elemento em v[i] e meteu la o a seguir
            }
            
            N--;
            i--;
        }
    
    }
    return N;
}
