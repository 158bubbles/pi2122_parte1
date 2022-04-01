int diferente(int i, int j, char s[]){
    //compara o bloco de numeros q estao entre i e j p/ serem todos diferentes
    while(i<j){
        if(s[i] == s[j]) return 0;
        i++;
    }
    return 1;
}



int difConsecutivos(char s[]){
    int i, j, dif = 0, max = 0;
    
    for(i=0; s[i] != '\0'; i++){
        dif = 0;
        
        for(j=i; s[j] != '\0' && diferente(i, j, s); j++){
            dif++;
        }
        
        if(dif > max){
                max = dif;
        }        
        
    }
    
    return max;   
}
