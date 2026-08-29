int scoreOfString(char* s) {
    int score=0;
    int len=strlen(s);
    for(int i=0;i<len-1;i++){
        score+=abs(s[i]-s[i+1]);
    }
    return score;
    
}