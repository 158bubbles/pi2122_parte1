int qDig (int n) {
    int res = 1;
    
    while(n > 9){
        n/=10;
        res++;
    }
    
    return res;
}
