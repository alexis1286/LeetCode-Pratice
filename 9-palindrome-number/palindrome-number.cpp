class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
         string reverse = string(s.rbegin(), s.rend());

         for (int i = 0; i < s.length(); i++) {
                        if(s[i] != reverse[i]){
                            return false;
                    }
                    
     }
     return true;
     }
    
    
};