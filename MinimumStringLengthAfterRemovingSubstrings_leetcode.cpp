class Solution {
public:
    int minLength(string s) {
        
        stack<int> stck;
        
        stck.push('@');
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'B' && stck.top() == 'A'){
                stck.pop();
            }else if(s[i] == 'D' && stck.top() == 'C'){
                stck.pop();
            }else{
                stck.push(s[i]);
            }
            
        }
        
        return (stck.size()-1);
    }
};


//----------------------------------------------------------------------------------------------------------


class Solution:
    def minLength(self, s: str) -> int:
        
#         if(len(s) == 0):
#             return len(s)
        
#         # print(s, "yess")
#         count = 0
#         for index in range(0, len(s)-1):
#             if((s[index] == 'A' and s[index+1] != 'B') or (s[index] == 'C' and s[index+1] !='D')):
#                 count += 1
#                 continue
#             else :
#                 break;
        
#         if(count == len(s)):
#             return len(s)
        

        i = 0
        while i+2 <= len(s) :
            if((s[i] == 'A' and s[i+1] == 'B') or (s[i] == 'C' and s[i+1] == 'D')):
                
                # print("bye", s[:i], s[i+2:])
                s = s[:i] + s[i+2 :]
                # print(s)
                return self.minLength(s)
            
            i += 1
        return len(s)




//----------------------------------------------------------------------------------------------------------------------


class Solution:
    def minLength(self, s: str) -> int:
        
        if(len(s) == 0):
            return len(s)
        
        # print(s, "yess")
        count = 0
        for index in range(0, len(s)-1):
            if((s[index] == 'A' and s[index+1] != 'B') or (s[index] == 'C' and s[index+1] !='D')):
                count += 1
                continue
            else :
                break;
        
        if(count == len(s)):
            return len(s)
        

        i = 0
        while i+2 <= len(s) :
            if((s[i] == 'A' and s[i+1] == 'B') or (s[i] == 'C' and s[i+1] == 'D')):
                
                # print("bye", s[:i], s[i+2:])
                s = s[:i] + s[i+2 :]
                # print(s)
                return self.minLength(s)
            
            i += 1
        return len(s)



