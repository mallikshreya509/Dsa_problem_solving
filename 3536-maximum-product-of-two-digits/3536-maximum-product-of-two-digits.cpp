class Solution {
public:
    int maxProduct(int n) {
        int a=INT_MIN;
        int b=INT_MIN;

        while(n){
        int temp=n%10;
        if(temp>=a) {b=a;a=temp;}
        else if(temp<a && temp>b) b=temp;
        n=n/10;
        
        } 
        return a*b; 
    }
};