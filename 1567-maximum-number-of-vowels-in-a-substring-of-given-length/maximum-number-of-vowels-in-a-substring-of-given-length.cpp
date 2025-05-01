class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels={'a','e','i','o','u'};
        int count=0, maxcount=0;
        for(int i=0; i<k; i++){
            if(vowels.count(s[i])){
                count++;
            }
        }
        maxcount=count;
        for(int i=k; i<s.size();i++){
            if(vowels.count(s[i])) count++;
            if(vowels.count(s[i-k])) count--;
            maxcount= max(count, maxcount);
        }
        return maxcount;
    }
};