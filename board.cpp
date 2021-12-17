#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Board{
    public:
        vector<vector<char>> read(){
            int n = 16;
            vector<vector<char>> board;
            cout << "Enter " << n << " letters \n";
            int cn = 0;
            for (int i = 0; i < 4; i++){
                char c;
                vector<char> row;
                for (int j = 0; j < 4; j++){
                    cout << cn + 1 << " ", cin >> c;
                    row.push_back(toupper(c));
                    cn++;
                }
                board.push_back(row);
            }
            return board;
        }
        void printBoard(vector<vector<char>> board){
            for (int i = 0; i < board.size(); i++){
                for (int j = 0; j < board[i].size(); j++){
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
        }
};