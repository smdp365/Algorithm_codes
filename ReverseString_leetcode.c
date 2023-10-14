void reverseString(char* s, int sSize){
    int start = 0, end = sSize - 1;
    while( start <= end ){
        char alpha = s[start];
        s[start] = s[end];
        s[end] = alpha;

        start++, end--;
    }
    return s;
}
