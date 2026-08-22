class Solution {
public:
    bool checkDivisibility(int n) {
        
        long long prod=1;
        long long sum=0;
        int n2=n;
        while(n){
            int rem=n%10;
            sum+=rem;
            prod*=rem;
            n=n/10;
        }
        long long sum2=sum+prod;
        if(n2%sum2==0) return true;
         return false;
    }
};