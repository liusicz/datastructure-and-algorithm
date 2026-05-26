bool isValid(char* s) {
    int len=strlen(s);
    char t[10001];
    int i,k=-1;
    for(i=0;i<len;i++){
        if(s[i]=='['||s[i]=='{'||s[i]=='('){
            t[++k]=s[i];
        }
        else if(s[i]==')'||s[i]==']'||s[i]=='}'){
            if(k==-1){
                return false;
            }
            if(s[i]==')'&&t[k]=='('||s[i]==']'&&t[k]=='['||s[i]=='}'&&t[k]=='{'){
                k--;
            }
            else{
                return false;
            }
        }
    }
    if(k!=-1||i!=len){
        return false;
    }
    return true;
}