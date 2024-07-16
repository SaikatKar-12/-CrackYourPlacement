//question:https://leetcode.com/problems/move-zeroes/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]==0) swap(nums[j],nums[j+1]);
            }
        }
    }
};
int main(){
    int a=-1;
    if(a>0){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    return 0;
}