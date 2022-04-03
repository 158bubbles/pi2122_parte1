int triSup (int N, int m[N][N]) {
    int i, j;
    
    for(i=0; i < N; i++){
        for(j=0; j < N; j++){
            
            if((i > j) && m[i][j] != 0) return 0;
            //a parte abaixo da diagonal tem de ser sempre 0
            //ou seja, se em i > j, nao for tudo 0, vai falhar
        }
    }
    
    return 1;
}
