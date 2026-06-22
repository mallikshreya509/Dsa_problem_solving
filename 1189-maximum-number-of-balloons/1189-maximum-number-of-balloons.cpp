class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        map<char,int>mp1;
         map<char,int>mp2;
         string s="balloon";
         int t=s.size();
         for(int i=0;i<t;i++) mp2[s[i]]++;
         for(int i=0;i<n;i++){
            mp1[text[i]]++;
         }
        //  int ans=0;
        //  for(auto i:mp1){
        //     if(mp2.find(i.first)!=mp2.end()){
        //         ans+=i.second/mp2[i.first];
        //     }
        //  }
        //  return ans/7;
        int ans = INT_MAX;
        for(auto &p : mp2) {
            ans = min(ans, mp1[p.first] / p.second);
        }

        return ans;
    }
};