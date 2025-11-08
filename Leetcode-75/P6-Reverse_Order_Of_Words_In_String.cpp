//Description: Reverse order of the words in a given string concatenated with single space separating the words
//Example: Input= "   The sky is blue  ", Output = "blue is the sky"
class Solution {
public:
    string reverseWords(string s) {
        string ans ="";
        int n = s.length();
        int i =0;
        for(int i =n-1; i>=0; i--){
            if(isalnum(s[i])){
                string str = "";
                while(i>=0 && isalnum(s[i])){
                    str =  s[i]+str;
                    i--;
                }
                ans += str;
                ans += " ";
            }  
        }
        return ans.substr(0, ans.length()-1);
    }
};
