// question : https://leetcode.com/problems/set-matrix-zeroes/
#include<iostream>
#include<unordered_set>
using namespace std;

class Solution {
public:
    unordered_set<int> row;
    unordered_set<int> col;
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(row.find(i)!=row.end() || col.find(j)!=col.end()){
                    matrix[i][j]=0;
                }else continue;
            }
        }
    }
};

int main(){
    
    return 0;
}