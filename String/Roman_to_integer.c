int r2i(char s)
{
    int num;
    switch (s){
        case 'I' : num = 1;    break;
        case 'V' : num = 5;    break;
        case 'X' : num = 10;   break;
        case 'L' : num = 50;   break;
        case 'C' : num = 100;  break;
        case 'D' : num = 500;  break;
        case 'M' : num = 1000; break;
        default: num = 0;
    }
    return num;
}

int romanToInt(char* s) {
    int len = strlen(s);
    int sum = 0;
    int num;
    for(int i=0; i<len-1; i++){
        if(r2i(s[i+1]) <= r2i(s[i])) sum += r2i(s[i]);
        else sum -= r2i(s[i]);
    }
    return sum + r2i(s[len-1]);
}