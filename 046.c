int cardinalMSet (int N, int v[N]){
   	  int i, res = 0;
   	  
   	  for(i=0; i < N; i++){
   	      
   	      res = res + v[i];
   	  }
   	  
   	  return res;
}
