int myAtoi(char* str) {
    int sign = 1;
    int i = 0;
    int base = 0;
    while(str[i] == ' ') i++;
    if(str[i] == '+' || str[i] == '-')
        sign = (str[i++] == '-')? -1 : 1;
    while (str[i] >= '0' && str[i] <= '9')
    {
        if(base > INT_MAX/10 || (base == INT_MAX/10 && str[i] > '7'))
            return (sign == 1)? INT_MAX : INT_MIN;
        base = base*10 + str[i++] - '0'; 
    }
    return sign*base;
}