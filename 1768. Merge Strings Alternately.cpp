class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        for(int i = 0 ; i<word1.length() + word2.length(); i++){
            if(i<word1.length())
               res = res + word1[i];
            if(i<word2.length())
               res = res + word2[i];
        }
        return res; 
    }
};