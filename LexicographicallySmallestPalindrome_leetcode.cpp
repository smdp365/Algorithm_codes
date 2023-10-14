class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        
        while(start <= end){
            if(s[start] < s[end]){
                s[end] = s[start];
                
            }
            
            if(s[start] > s[end]){
                s[start] = s[end];
            }
            
            start++;
            end--;
        }
        
        return s;
    }
};
