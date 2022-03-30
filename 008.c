char *mystrcpy(char s1[], const char s2[]) {
    int i = 0, j;
    
    for(j=0; s2[j] != '\0'; j++){
        
        s1[i] = s2[j];
        i++;
    }
    
    s1[i] = '\0';
    
    return s1;
}
