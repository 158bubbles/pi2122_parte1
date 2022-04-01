int maiorPrefixo (char s1 [], char s2 []) {
    int i, prefixo = 0;
    
    for(i=0; s1[i] == s2[i]; i++){
        prefixo++;
    }
    
    return prefixo;
}
