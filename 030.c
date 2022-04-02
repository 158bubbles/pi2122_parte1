int menosFreq (int v[], int N){
       int i, j, count = 0, minEl = v[0], min = N;
       
       for(i=0; i < N; i++){
           count = 0;
           
           for(j=0; j < N; j++){
               
               if(v[j] == v[i]){
                   count++;
               }
           }
           
           if(count < min){
               min = count;
               minEl = v[i];
           }
       }
       
       return minEl;
}
