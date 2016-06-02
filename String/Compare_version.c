int compareVersion(char* version1, char* version2) {
    int A=0, B=0;
    int i=0, j=0;
    int len1 = strlen(version1);
    int len2 = strlen(version2);
    while(i < len1 || j < len2){
        while((version1[i] != '.' && i < len1 ) || (version2[j] != '.' && j < len2 )){
            if(version1[i] != '.' && i < len1 ) A = A*10 + version1[i++] - '0';
            if(version2[j] != '.' && j < len2 ) B = B*10 + version2[j++] - '0';
        }
        if(A>B) return 1;
        else if(A<B) return -1;
        i++;
        j++;
        A=0;
        B=0;
    }
    return 0;
}