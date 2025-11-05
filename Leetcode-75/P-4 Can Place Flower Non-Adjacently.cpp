/*  Description : In an array flowerbed 1 represents flower is planted and 0 represent empty plot
plant flowers in such a way that no two flowers are adjacent to each other .
if able to plant n flowers without violating the rule return true else return false */
//Ex: flowerbed =[1,0,0,0,1,0,0], n=2, output = true
//Ex: flowerbed =[0,0,1,0,1], n=2, output = false

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size(),i=0;
        for(int i = 0; i<len && n>0; i++){
            if(flowerbed[i]==1 ||  (i>0 && flowerbed[i-1]==1) ||(i<len-1 && flowerbed[i+1]==1))
                continue; //inme se kuch bhi true hai toh aage badh jao
            flowerbed[i]=1;
            n--;
        }
        return n==0;
    }
};
