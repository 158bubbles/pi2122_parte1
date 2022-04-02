int charEstaContido(char c, char d[]){
    int i;
    
    for(i=0; d[i] != '\0'; i++){   //só dá 1 se o c for um dos d[i], se nao avança i++
        if(c == d[i]) return 1;
    }
    return 0;
}




int contida (char a[], char b[]) {
    int i; 
    
    for(i=0; a[i] != '\0'; i++){  //p cada elemento de a[] vamos ver se está em b[]
        if(charEstaContido(a[i], b) == 0) return 0;
    }
    
    return 1;
}
