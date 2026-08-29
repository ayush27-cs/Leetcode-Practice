char repeatedCharacter(char* s) {
    for(int i=0;s[i]!='\0';i++){
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                return s[i];
            }
        }
    }
    return '\0';
}