#include <bits/stdc++.h>
int maxProfit(vector<int>& prices) {

        int res = 0;
        int curr = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
               if (prices[i] < curr)
               {
                   curr = prices[i];
               }
               else 
               {
                   res = max(res, prices[i] - curr);
               }
        }
        return res;
    }