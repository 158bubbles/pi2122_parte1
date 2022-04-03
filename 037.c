int minInd (int v[], int n) {
   int i, menor = v[0], posMenor = 0;
   
   for(i=0; i < n; i++){
       if(v[i] < menor){
           menor = v[i];
           posMenor = i;
       }
   }
   
   return posMenor;
}
