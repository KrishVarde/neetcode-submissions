class Solution {
public:

    string raw(string s){
        string res="";
        for(char c : s){
            if (c >= 'A' && c <='Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9'){
                if(c >= 'A' && c <='Z')
                    c = c - 'A' + 'a';
                res += c;
            }
        }
        return res;
    }


    bool isPalindrome(string s) {
        string r = raw(s);
        int i = 0; 
        int j = r.length() - 1; 
        while(i<j){
            if(r[i] != r[j])
                return false;
            i++;j--;
        }
        return true;
    }
};
