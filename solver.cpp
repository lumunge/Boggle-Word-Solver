#include<iostream>
#include<vector>
#include<string>
#include "./trie.cpp"

using std::string;
using std::vector;
using std::cout;
using std::endl;

#define R 4
#define C 4

class Solver{
    private:
        Trie tr;
        TrieNode *root = tr.buildTrie();

        void dfs(vector<vector<char>> board, bool visited[R][C],TrieNode *root, int row, int col, string& str){
            visited[row][col] = true;
            str += board[row][col];
            if(tr.search(str, root) && str.length() > 2){
                cout << str << ", ";
            }
            for(int i = row-1; i <= row+1 && i < R; i++){
                for(int j = col-1; j <= col+1 && j < C; j++){
                    if(i >= 0 && j >= 0 && !visited[i][j])
                        dfs(board, visited, root, i, j, str);
                }
            }
            str.erase(str.length() - 1);
            visited[row][col] = false;
        }
    public:
        void solve(vector<vector<char>> board){
            bool visited[R][C] = {{false}};
            string str = "";
            for(int i = 0; i < R; i++){
                for(int j = 0; j < C; j++){
                    dfs(board, visited, root, i, j, str);
                }
            }
        }
};