class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& inter) {
        int n=inter.size();
        //sort(inter.begin(),inter.end());
        sort(inter.begin(), inter.end(), [](auto &a, auto &b){
    if(a[0] == b[0])
        return a[1] > b[1];   // descending end
    return a[0] < b[0];
});
        int ans=1;
        int start=inter[0][0];
        int end=inter[0][1];
        for(int i=1;i<n;i++){
             int b=inter[i][0];
             int d=inter[i][1];
             if(start<=b && end>=d){
                start=min(start,b);
                end=max(end,d);
             }
             else {
                ans++;
                start=b;
                end=d;
             }
        }
        return ans;
    }
};