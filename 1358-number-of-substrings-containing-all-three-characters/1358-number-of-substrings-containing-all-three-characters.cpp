class Solution {
public:
    int numberOfSubstrings(string s) {
         int cnt[3] = {0,0,0};
    int n = s.size();
    long long ans = 0;
    int i = 0;
    for (int j = 0; j < n; j++) {
        cnt[s[j]-'a']++;
        while (cnt[0] && cnt[1] && cnt[2]) {
            cnt[s[i]-'a']--;
            i++;
        }
        ans += i; // all substrings ending at j with left boundary < i are valid
    }
    return ans;
    }
};