#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty() || word.empty()) return false;

        int m = board.size();
        int n = board[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));


        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (backtrack(board, visited, word, directions, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }

private:
    bool backtrack(vector<vector<char>>& board, vector<vector<bool>>& visited, const string& word,
                   vector<pair<int, int>>& directions, int r, int c, int index) {

        if (index == word.length()) return true;


        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || visited[r][c] || board[r][c] != word[index]) {
            return false;
        }


        visited[r][c] = true;


        for (auto& dir : directions) {
            int nr = r + dir.first;
            int nc = c + dir.second;
            if (backtrack(board, visited, word, directions, nr, nc, index + 1)) {
                return true;
            }
        }


        visited[r][c] = false;

        return false;
    }
};
