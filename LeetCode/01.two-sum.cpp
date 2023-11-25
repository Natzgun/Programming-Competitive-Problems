#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& nums) {
  for (int i = 0; i < nums.size(); ++i) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> aux;
  for (int f = 0; f < nums.size(); f++) {
    for (int s = 1; s < nums.size(); s++) {
      if(nums[f] == (target - nums[s++])) {
        aux.push_back(f);
        aux.push_back(s);
        return aux;
      }
    }
  }
  return {};
}

int main () {
  vector<int> vec1;
  int target;
  vec1.push_back(2);
  vec1.push_back(5);
  vec1.push_back(5);
  vec1.push_back(11);
  cin >> target;
  vector<int> aux = twoSum(vec1,target);
  printVector(aux);

  return 0;
}