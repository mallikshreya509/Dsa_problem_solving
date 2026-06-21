class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);
        for (int cost : costs) {
            freq[cost]++;
        }
        int ans = 0;

        for (int price = 1; price <= 100000; price++) {
            if (freq[price] == 0) continue;

            int canBuy = min(freq[price], coins / price);

            ans += canBuy;
            coins -= canBuy * price;

            if (coins < price) {
                // cannot buy any more of this or larger prices
                break;
            }
        }

        return ans;
    }
};