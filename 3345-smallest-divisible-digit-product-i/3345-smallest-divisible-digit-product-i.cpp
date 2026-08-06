class Solution {
public:
int solve(int temp){
int prod=1;
while(temp){
    prod*=temp%10;
    temp=temp/10;
}
return prod;
}
    int smallestNumber(int n, int t) {
        int temp=n;
        if(solve(temp)%t==0) return temp;
        while(solve(temp)%t){
            temp++;
        }
        return temp;
    }
};