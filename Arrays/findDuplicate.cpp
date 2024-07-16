//question:https://leetcode.com/problems/find-the-duplicate-number
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
// the intituion is the array is imagined as linked list and slow and fast pointers are used for identifying the cycle
int main(){
    
    return 0;
}