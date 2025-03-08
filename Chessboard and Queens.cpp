#include <bits/stdc++.h>
using namespace std;

#define ll long long

void backtrack(vector<vector<char>>& board, ll row, set<int>& cols, set<int>& posDiag, set<int>& negDiag, ll& count)
{
    if(row == board[0].size())
    {
        count++;
        return;
    }
    for(ll col=0; col<board[0].size(); col++)
    {
        if(cols.find(col) != cols.end() || posDiag.find(row + col) != posDiag.end() || negDiag.find(row - col) != negDiag.end() || board[row][col] == '*')
            continue;

        board[row][col] = 'Q';
        cols.insert(col);
        posDiag.insert(row + col);
        negDiag.insert(row - col);
        backtrack(board, row+1, cols, posDiag, negDiag, count);
        board[row][col] = '.';
        cols.erase(col);
        posDiag.erase(row + col);
        negDiag.erase(row - col);
    }
}

int main()
{
    const int N = 8;

    vector<vector<char>> board(N, vector<char>(N, '.'));
    for(ll i=0; i<N; i++)
        for(ll j=0; j<N; j++)
            cin >> board[i][j];
    set<int> cols, posDiag, negDiag;
    ll count = 0;
    backtrack(board, 0, cols, posDiag, negDiag, count);
    cout << count << endl;
}
