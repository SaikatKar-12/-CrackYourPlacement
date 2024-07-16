//question:https://leetcode.com/problems/sort-colors/description/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0=0;
        int num1=0;
        int num2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) num0++;
            else if(nums[i]==1) num1++;
            else num2++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<num0){
                nums[i]=0;
            }else if(i>=num0 && i<(num0+num1)){
                nums[i]=1;
            }else{
                nums[i]=2;
            }
        }
    }
};
int main(){
    
    return 0;
}