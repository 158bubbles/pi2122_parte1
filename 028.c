int crescente (int a[], int i, int j){
       int k;
       
       for(k=i; k < j; k++){
           
           if(a[k] > a[k+1]) return 0;
       }

       return 1;
}
