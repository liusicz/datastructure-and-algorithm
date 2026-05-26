char* mergeAlternately(char* word1, char* word2) {
    int l1=strlen(word1),l2=strlen(word2);
    char* word=(char*)malloc(l1+l2+1);
    int p=0,q=0,l=0;
    while(p<l1&&q<l2){
        word[l++]=word1[p++];
        word[l++]=word2[q++];

    }
    while(p<l1)word[l++]=word1[p++];
    while(q<l2)word[l++]=word2[q++];
    word[l]='\0';
    return word;

}