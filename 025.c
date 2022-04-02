int limpaEspacos (char s[]) {
    int i, k=0;
    char aux[strlen(s)+1];
    
    for(i=0; s[i] != '\0'; i++){
        
        if(s[i] != ' ' || s[i+1] != ' '){
            aux[k] = s[i];
            k++;
        }
    }
    
    aux[k] = '\0';
    strcpy(s, aux);
    
    return strlen(s);
}
