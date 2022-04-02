int maxCresc (int v[], int N) {
       int i, count = 1, max = 1;
       
       for(i=0; i < N; i++){
           if(v[i] <= v[i+1]){
               count++;
           } else {
               if(count > max) max = count;
               
               count = 1;
           }
       }
       
       return max;
}
