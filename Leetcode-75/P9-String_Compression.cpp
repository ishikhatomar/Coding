/*Description: An array of characters is given, compress the array -
for each group of consecutive characters - 
1) if group length is 1 , append the letter
2) if group length >1 and <=9 append letter followed by count
3) if group length >=10 append letter followed by splitting the the count in multiple characters
 return the length of compressed array*/
//EXample: Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"] 
//Output: chars = ["a","b", "1","2"]
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0;
        for(int j =0; j<n;){
            char current = chars[j];
            int count =0;
            while(j<n && current ==chars[j]){
                j++;
                count++;
            }
            //put the character
            chars[i++]=current;

            //store count if count>1
            if(count>1){
                string str = to_string(count);
                for(char ch: str)
                    chars[i++]=ch;
            }
        }
        return i;
    }
};
