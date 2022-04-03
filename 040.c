void transposta (int N, float m[N][N]) {
    int i, j;
    float a[N][N];
    
    for(i=0; i < N; i++){
        for(j=0; j < N; j++){
            
            a[i][j] = m[j][i];
        }
    }
    
    for(i=0; i < N; i++){
        for(j=0; j < N; j++){
            
            m[i][j] = a[i][j];
        }
    }
}
