//question:https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min_curr=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min_curr) min_curr=prices[i];
            if(max_profit<(prices[i]-min_curr)) max_profit=prices[i]-min_curr;
        }
        return max_profit;
    }
};
int main(){
    
    return 0;
}