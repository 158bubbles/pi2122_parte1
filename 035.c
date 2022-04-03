int comunsOrd (int a[], int na, int b[], int nb){
    int i=0, j=0, res = 0;
    
    while(i < na && j < nb){
        
        if(a[i] == b[j]){
            res++;
            i++;
            j++;
        } else if(a[i] < b[j]){
            i++;
        } else {
            j++;
        }
    }
    
    return res;
}
