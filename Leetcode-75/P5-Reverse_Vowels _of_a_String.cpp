//Description: Reverse all vowels of a given string 
//Example: Input: s = "IceCreAm", output ="AceCreIm"
class Solution {
public:
    string reverseVowels(string s) {
        auto isVowel = [](char c){ //lambda function in c++
            c = tolower(c);
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        }; //put semi colon after lambda function ends
        int n = s.length();
        int i =0, j =n-1;

        while(i<j){
            while(i<j && !isVowel(s[i]))i++;
            while(i<j && !isVowel(s[j]))j--;
            if(i<j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
