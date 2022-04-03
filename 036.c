int comuns (int a[], int na, int b[], int nb){
      int i, j, res = 0;
      
      for(i=0; i < na; i++){
          
          for(j=0; j < nb; j++){
              
              if(a[i] == b[j]){
                  res++;
                  break;  //se encontrar um igual a a[] em b[], sai do loop de j e outro elemento é testado
              }
          }
      }
      
      return res;
   }
