//question : https://leetcode.com/problems/game-of-life/description/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int count_neighbour(vector<vector<int>>& board,int row,int col){
        int count=0;
        if(row>0 && board[row-1][col]==1) count++;
        if(col>0 && board[row][col-1]==1) count++;
        if(row>0 && col>0 && board[row-1][col-1]==1) count++;
        if(col<board[0].size()-1 && board[row][col+1]==1) count++;
        if(row<board.size()-1 && col<board[0].size()-1 && board[row+1][col+1]==1) count++;
        if(row<board.size()-1 && board[row+1][col]==1) count++;
        if(row>0 && col<board[0].size()-1 && board[row-1][col+1]==1) count++;
        if(row<board.size()-1 && col>0 && board[row+1][col-1]==1) count++;
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> helper=board;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int neighbour= count_neighbour(board,i,j);
                if(board[i][j]==1 && neighbour<2) helper[i][j]=0;
                else if(board[i][j]==1 && neighbour>3) helper[i][j]=0;
                else if(board[i][j]==0 && neighbour==3) helper[i][j]=1;
            }
        }
        board=helper;
    }
};
int main(){
    
    return 0;
}