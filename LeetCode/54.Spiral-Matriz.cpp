#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> result;
    int corner = 0;
    int lastX = matrix[0].size();
    int lastY = matrix.size();

    while (corner < lastX && corner < lastY) {
      // right
      for (int i = corner; i < lastX; i++)
        result.push_back(matrix[corner][i]);

      // bottom
      for (int i = corner + 1; i < lastY; i++)
        result.push_back(matrix[i][lastX - 1]);

      // left
      for (int i = lastX - 2; i >= corner && lastY - 1 != corner; i--)
        result.push_back(matrix[lastY - 1][i]);

      // up
      for (int i = lastY - 2; i > corner && lastX - 1 != corner; i--)
        result.push_back(matrix[i][corner]);

      corner++;
      lastX--;
      lastY--;
    }

    return result;
  }
};
