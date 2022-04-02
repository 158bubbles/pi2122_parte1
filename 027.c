   void merge (int r [], int a[], int b[], int na, int nb){
       int i=0, j=0, k;
       
       for(k=0; k < na+nb; k++){
           
           if(i == na){ //i começa no zero, ou seja, se n houver elementos no a[], mete b[]
               r[k] = b[j];
               j++;
           }
           else if(j == nb){  //se n houver b[], mete a[]
                r[k] = a[i];
                i++;
              
           } else {
               if(a[i] < b[j]){
                   r[k] = a[i];
                   i++;
               } else {
                   r[k] = b[j];
                   j++;
               }
           }
           
       }
   }
