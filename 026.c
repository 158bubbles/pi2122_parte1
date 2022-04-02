   void insere (int s[], int N, int x){
        int i, j;
        
        if(x < s[N-1]){   //se for menor q o ultimo, vai estar no meio
            
            for(i=0; i < N; i++){  //se x for maior q o s[i], avança sempre
            
                if(s[i] > x){   //se for menor, os elementos p a frente têm de avancar uma casa 
                    for(j=N; i!=j; j--){
                        s[j] = s[j-1];   //o valor de s[j] passa a ser o elemento anterior
                    }
                    s[i] = x;  //ficamos assim com um espaço e metemos o x
                    break;
                }
            }
        } else {
            s[N] = x; //fica na ultima posição, a maior
        }
    
   }
