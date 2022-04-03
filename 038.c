void somasAc (int v[], int Ac [], int N){
   int i;
   Ac[0] = v[0];
   
   for(i=1; i < N; i++){
       
       Ac[i] = v[i] + Ac[i-1];
   }
}
