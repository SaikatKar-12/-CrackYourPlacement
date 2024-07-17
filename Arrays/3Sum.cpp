//question:https://leetcode.com/problems/3sum/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;
            int sum;
            while(left<right){
                sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    s.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }else if(sum<0){
                    left++;
                }else right--;
            }
        }
        for(auto triplets :s){
            ans.push_back(triplets);
        }
        return ans;
    }
};
int main(){
    
    return 0;
}