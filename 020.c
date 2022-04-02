int contaPal (char s[]) {
    int i, res = 0;
    
    for(i=0; s[i] != '\0'; i++){
        if((!(isspace(s[i])) && isspace(s[i+1])) || (!(isspace(s[i])) && s[i+1] == '\0')){
            res++;
            
        }
    }

    return res;
}
