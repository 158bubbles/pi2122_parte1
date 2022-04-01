int iguaisConsecutivos (char s[]) {
    int i, count = 1, max = 0;
    
    for(i=0; s[i] != '\0'; i++){
        if(s[i] == s[i+1]){
            count++;
        }
        else {
        
            if(count > max){
                max = count;
                count = 1;
            }
        }
    }
    

    return max;
}
