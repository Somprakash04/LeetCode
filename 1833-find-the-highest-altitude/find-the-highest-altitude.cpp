class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxvalue=0;
        for(int i=0; i<gain.size();i++){
            if(i==0) gain[0]=gain[0];
            else{
                gain[i]=gain[i]+gain[i-1];
                maxvalue=max(maxvalue, gain[i]);
            }
            maxvalue=max(maxvalue, gain[0]);
        }
        return maxvalue;
    }
};