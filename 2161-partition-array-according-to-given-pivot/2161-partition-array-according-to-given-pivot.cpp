class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>less;
        vector<int>more;
        vector<int>equal;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot) less.push_back(nums[i]);
           else if(nums[i]>pivot) more.push_back(nums[i]);
           else equal.push_back(nums[i]);

        }
        vector<int>ans;
        int l=less.size();
        for(int i=0;i<l;i++){
            ans.push_back(less[i]);
        }  
         
        int e=equal.size();
        for(int i=0;i<e;i++){
            ans.push_back(equal[i]);
        }
         int m=more.size();
        for(int i=0;i<m;i++){
            ans.push_back(more[i]);
        }

        return ans;

    }
};