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

        // Define direction vectors: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        // Try starting from each cell in the board
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
        // Base case: If all characters in the word are matched
        if (index == word.length()) return true;

        // Check boundaries and character match
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || visited[r][c] || board[r][c] != word[index]) {
            return false;
        }

        // Mark current cell as visited
        visited[r][c] = true;

        // Explore all 4 directions
        for (auto& dir : directions) {
            int nr = r + dir.first;
            int nc = c + dir.second;
            if (backtrack(board, visited, word, directions, nr, nc, index + 1)) {
                return true;
            }
        }

        // Backtrack: Unmark the cell
        visited[r][c] = false;

        return false;
    }
};
