char eVogal(char c){
    return (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U');
}


int contaVogais (char s[]) {
    int i, res = 0;
    
    for(i=0; s[i] != '\0'; i++){
        if(eVogal(s[i])){
            res++;
        }
    }
    
    return res;
}
