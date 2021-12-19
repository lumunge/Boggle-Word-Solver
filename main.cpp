#include<iostream>
#include<vector>
#include "./board.cpp"
#include "./solver.cpp"

using std::vector;
using std::cout;
using std::endl;


class Solve{
    private:
        Board bd;
        Solver sv;

    public:
        void run(){
            vector<vector<char>> board = bd.read();
            bd.printBoard(board);
            sv.solve(board);
        }
};

int main(){
    Solve sv;
    sv.run();
    cout << endl;
    return 0;
}