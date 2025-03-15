class Solution {
public:
    bool issame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            // int idx = s1[i]-'a';
            // freq[idx]++
            freq[s1[i]-'a']++;
        }
        // int windfreq[26]={0};
        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windfreq[26]={0};
            int windIdx=0,idx=i;
            while(windIdx<windsize && idx<s2.length()){
                windfreq[s2[idx]-'a']++;
                windIdx++;idx++;
            }
        
        if(issame(freq,windfreq)){
            return true;
        }}
        return false;
    }
};