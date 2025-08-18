class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size(), count = 0;
        stack<int>st;
        st.push(-1);
        if(n==0) return 0;
        for(int i=0; i<n; i++){
            if(s[i] =='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    count = max(count, i-st.top());
                }
            }
        }
        return count;
    }
};