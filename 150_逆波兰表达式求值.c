int evalRPN(char** tokens, int tokensSize) {
    int exp[10001];
    int k=0;
    for(int i=0;i<tokensSize;i++){
            if(strcmp(tokens[i],"+")==0){
            exp[k-2]=exp[k-2]+exp[k-1];
            k=k-1;
            }
            else if(strcmp(tokens[i],"-")==0){
            exp[k-2]=exp[k-2]-exp[k-1];
            
            k=k-1;
            }
            else if(strcmp(tokens[i],"*")==0){
            exp[k-2]=exp[k-2]*exp[k-1];
            
            k=k-1;
            }
            else if(strcmp(tokens[i],"/")==0){
            exp[k-2]=exp[k-2]/exp[k-1];
            
            k=k-1;
            }
            else{
            exp[k]=atoi(tokens[i]);
            
            k++;
            }
        }
    return exp[0];
}