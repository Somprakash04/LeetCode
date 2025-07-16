class Solution {
public:
    bool isAnagram(string s, string t) {
        /* --Brute Force approach--
        if( s.size() != t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;*/
        
        //Better approach--
        if( s.size() != t.size()) return false;
        vector<int>count(26,0);

        for(char c : s) count[c-'a']++;
        for(char c : t) count[c-'a']--;

        for(int freq : count){
            if(freq != 0) return false; 
        }
        return true;
    }
};