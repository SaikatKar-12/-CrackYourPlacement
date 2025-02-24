//question:https://leetcode.com/problems/subarray-sums-divisible-by-k/description/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int count = 0;

        unordered_map<int, int> m;
        m[0] = 1;

        for (int i : nums) {
            sum += i;
            int mod = sum % k;
            if (mod < 0)
                mod += k;
            if (m.find(mod) != m.end()) {
                count += m[mod];
            }
            m[mod]++;
        }

        return count;
    }
};
int main(){
    
    return 0;
}