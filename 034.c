int elimRepOrd (int v[],int N){ 
	int i, j = 0, n = 0;
	for (i = 0; i < N; i++){
	    
		if (v[i] != v[j]){
			j++;
			v[j] = v[i];
		}
	}
	
	n=j+1;
	
	return n;
}
