char * reverseWords(char * s){
    

    for(int i = 0, j = i; i < strlen(s) - 1 && j <= strlen(s) - 1; j++){
        // printf("%c,", s[j]);
        if(s[j+1] == ' ' || s[j+1] == '\0'){
            // printf("h,");
            int start = i, end = j;
            while( start <= end ){
                char alpha = s[start];
                s[start] = s[end];
                s[end] = alpha;

                start++, end--;
            }
            i = j+2, j = i-1;
        }
    }

    return s;
}
