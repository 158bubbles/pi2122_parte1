char charMaisfreq (char s[]) {
    
    int i, j, max = 0, count=0;
    char caracter;
    
    if(s[0] == '\0') return 0;
    
    for(i=0; s[i] != '\0'; i++){
        count = 0;
        for(j=0; s[j] != '\0'; j++){
            
            if(s[i] == s[j]){
                count++;
            }
            
        }
        
        if(count>max){
            max = count;
            caracter = s[i];
        }
        
    }
    
    
    return caracter;
}
