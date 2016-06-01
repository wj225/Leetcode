char* convert(char* s, int numRows) {
    int len = strlen(s);
    char* dest = (char*)malloc((len+1)*sizeof(char));
    int k=0;
    if(numRows==1 || len<=numRows )return s;
    for(int i=0; i<numRows; i++)
    {
        for(int j=i; j<len; j+=2*(numRows-1))
        {
            dest[k++] = s[j];
            if(i!=0 && i!=numRows-1){
                int t=j+2*(numRows-1)-2*i;
                if(t<len) dest[k++]=s[t];
            }
        }
    }
    dest[k]='\0';
    return dest;
}
