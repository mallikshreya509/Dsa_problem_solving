class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int temp=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            temp+=gain[i];
            ans=max(ans,temp);
        }
        return ans;
    }
};