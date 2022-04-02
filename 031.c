int maisFreq (int v[], int N){
       int i, j, count = 0, maxEl = v[N], max = 0;
       
       for(i=0; i < N; i++){
           count = 0;
           
           for(j=0; j < N; j++){
               
               if(v[j] == v[i]){
                   count++;
               }
           }
           
           if(count > max){
               max = count;
               maxEl = v[i];
           }
       }
       
       return maxEl;
}
