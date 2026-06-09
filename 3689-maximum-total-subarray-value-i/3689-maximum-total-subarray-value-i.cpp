class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i:nums){
            if(i>maxi) maxi=i;
            if(i<mini) mini=i;
        }
        ans=1LL* k*(maxi-mini);
        return ans;
    }
};