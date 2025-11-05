/* Two strings s1 and s2 are given, merge characters of both the 
string alternatively starting from string s1, if one string is 
smaller in size append the remaining characters of other string.*/
//Difficulty Level - Easy
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge ="";
        int i =0, j=0;
        while(i<word1.size() && j<word2.size()){
            merge += word1[i];
            merge += word2[j];
            i++;
            j++;    
        }
        if(i<word1.size()){
            merge += word1.substr(i);
        }
        if(j<word2.size()){
            merge += word2.substr(j);
        }
        return merge;
    }
};