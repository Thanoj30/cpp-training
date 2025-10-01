#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n));

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n - 1;
        int endingCol = n - 1;

        int newCol = n - 1;  // we start filling from last column
        while (startingRow <= endingRow) {
            int newRow = 0;
            for (int index = startingCol; index <= endingCol; index++) {
                ans[newRow][newCol] = matrix[startingRow][index];
                newRow++;
            }
            startingRow++;
            newCol--;
        }

        // copy back rotated matrix
        matrix = ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    sol.rotate(matrix);

    // print rotated matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// void transpose(vector<vector<int>>& matrix , int row , int col){
//      for(int i = 0; i<row ; i++){ 
//         for(int j = 0 ; j<i ; j++){ 
//             swap(matrix[i][j] , matrix[j][i]); 
//         } 
//     } 
//     return ; 
// }
//  void rotate(vector<vector<int>>& matrix)
//   {
//      int row = matrix.size(); 
//      int col = matrix[0].size();
//       transpose(matrix , row , col);
//        for(int i = 0 ; i<row ; i++){ 
//         reverse(matrix[i].begin() , matrix[i].end());
//      }
//       return ;
//      }
