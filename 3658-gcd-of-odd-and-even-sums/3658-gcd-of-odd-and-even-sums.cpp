class Solution {
public:
int gcd(int os,int es){
    // 
    int ans=1;
    for(int i=1;i<=os;i++){
        if((os%i==0 )&& (es%i==0)) ans=i;
    }
return ans;
}
    int gcdOfOddEvenSums(int n) {
        int odd=1;
        int even=2;
        int oddsum=0;
        int evensum=0;
        for(int i=0;i<n;i++){
            oddsum+=odd;
            evensum+=even;
            odd+=2;
            even+=2;
        }
        return gcd(oddsum,evensum);
    }
};