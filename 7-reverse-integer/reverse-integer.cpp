class Solution {
public:
    int reverse(int n) {
         int revNum=0;
      while(n!=0){
        int digit=n%10;
        if(revNum>INT_MAX/10 || revNum<INT_MIN/10){
            return 0; 
        }
        revNum=revNum*10+digit;
        n=n/10;
      }
    return revNum;
}
};