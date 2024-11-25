class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(n==0) return 1.0;
        if(x==-1 && n%2==0) return 1;
        if(x==-1 && n%2!=0) return -1;
        long binform=n;
        if(n<0){
            x=1/x;
            binform=-binform;
        }
        double ans=1;
        while(binform>0){
            if(binform%2==1){
                ans*=x;
            }
            x*=x;
            binform=binform/2;
        }
        return ans;
    }
};