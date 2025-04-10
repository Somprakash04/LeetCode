class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(), m=word2.size();
        int i=0, j=0;
        string merge="";
        while(i<n || j<m){
           if(i<n){
             merge+= word1[i++];
           }
           if(j<m){
             merge+= word2[j++];
           }
        }
        if(i==n){
            merge+=word2.substr(j);
        }
        return merge;
    }
};