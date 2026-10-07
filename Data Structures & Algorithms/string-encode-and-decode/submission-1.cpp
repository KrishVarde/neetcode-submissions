class Solution {
public:

    int convert(string str){
        int conv = 0;
        for(char c : str){
            conv = (conv*10) + (c - '0');
        }
        return conv;
    }

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto str : strs){
            encoded += to_string(str.length());
            encoded += "#";
            encoded += str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string len = "";
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i]>= '0' && s[i] <= '9' ){
                len += s[i];
            }
            else if(s[i] == '#'){
                int skip = convert(len);
                decoded.push_back(s.substr(i+1 ,skip));
                i+=(skip);
                len.clear();
            }
        }
        return decoded;
    }
};
