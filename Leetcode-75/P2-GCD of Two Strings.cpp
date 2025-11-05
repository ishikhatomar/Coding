/* Description: Return longest string x which divides both string str1 and str2
Division means t divides s when s = t+t+t..*/
//Difficulty - Easy

class Solution {
public:
    string joinWords(string base, int qoutient){
        string ans ="";
        for(int i =1; i<=qoutient; i++)
               ans += base;
        return ans;              
    }
    bool isDivisor(string str1, string str2, int k){
         int l1 = str1.size(), l2 = str2.size();
         if(l1%k!=0 ||l2%k!=0) return false;
         else{
            string base = str1.substr(0,k);
            int n1 = l1/k, n2=l2/k;
            return str1==joinWords(base,n1) && str2==joinWords(base,n2);
         }
        
    }
    string gcdOfStrings(string str1, string str2) {
       int l1 = str1.size(), l2 = str2.size();
       
       for(int i = min(l1,l2); i>=1; i--){
         if(isDivisor(str1, str2, i))
            return str1.substr(0, i);
       }
       return "";
    }
};
