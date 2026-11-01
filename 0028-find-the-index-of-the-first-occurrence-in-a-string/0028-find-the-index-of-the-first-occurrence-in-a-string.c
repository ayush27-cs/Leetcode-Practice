int strStr(char* haystack, char* needle) {
    int hlen = strlen(haystack);
    int nlen = strlen(needle);
    int i,j=0;
    if(nlen>hlen)
    return -1;
    for(i=0;i<=hlen-nlen;i++)
    {
        j=0;
        while(j<nlen && haystack[i+j] ==needle[j])
        {
            j++;
        }
        if(j == nlen)
        {
            return i;
        }
    }
    return -1;
}
    
