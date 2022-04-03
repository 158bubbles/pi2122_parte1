int qDig (int n) {
    int res = 1;
    
    while(n%10 != n){
        res++;
        n/=10;
    }
    
    return res;
}
