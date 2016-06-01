char* reverseVowels(char* s) {
    int len = strlen(s); 
    char* temp = (char*)malloc(len*sizeof(char));
    int n = 0,i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o' || s[i]=='A' || s[i]=='I' || s[i]=='U' || s[i]=='E' || s[i]=='O')
        {
            temp[n] = s[i];
            n++;
        }
    }
    n = 0;
    for(i= len-1 ;i>=0;i--)
    {
        if(s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o' || s[i]=='A' || s[i]=='I' || s[i]=='U' || s[i]=='E' || s[i]=='O')
        {
            s[i] = temp[n];
            n++;
        }
    }
    free(temp);
    return s;
}