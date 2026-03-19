#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<char>>& mat){
    int n = mat.size();
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n ; j++){
            cout << mat[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
}
bool isSafe(vector<vector<char>>& board,int row, int col){
    // Vertical cheack
    int n = board.size();
    for(int i = 0; i < n; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    // Horizontal check
    for(int j = 0; j<n ; j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }
    // right Diagonal cheak
    for(int i = row,j = col;i>=0 && j>=0;i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    // left Upper Diagonal cheak
    for(int i = row,j = col;i>=0 && j < n; i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}
void nQueens(vector<vector<char>>& board,int row){
    int n = board.size();
    if(row == n){
        print(board);
        return;
    }
    for(int j = 0; j<n ; j++){
        if(isSafe(board,row,j))
        {
            board[row][j] = 'Q';
            nQueens(board,row + 1);
            board[row][j] = '.';
        }
    }
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<vector<char>> mat(n,vector<char>(n,'.'));
    nQueens(mat,0);
    return 0;
}