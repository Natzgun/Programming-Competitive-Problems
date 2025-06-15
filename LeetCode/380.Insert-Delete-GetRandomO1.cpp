#include <bits/stdc++.h>
#include <cstdlib>
#include <iterator>
#include <list>
#include <unordered_map>
using namespace std;

class RandomizedSet {
  //list<int> nums;
  // unordered_map<int, list<int>::iterator> map;
  vector<int> nums;
  unordered_map<int, int> map;

public : 
  RandomizedSet() {}

  bool insert(int val) { 
    if (map.find(val) != map.end()) {
      return false;
    }
    nums.push_back(val);
    // auto it = prev(nums.end());
    // map[val] = it;
    map[val] = nums.size() - 1;

    return true;
  }

  bool remove(int val) { 
    if (map.find(val) == map.end()) {
      return false;
    }

    // auto it = map[val];
    // nums.erase(it);
    int index = map[val];
    int lastValue = nums.back();

    nums[index] = lastValue;
    map[lastValue] = index;

    nums.pop_back();
    map.erase(val);

    return true;
  }

  int getRandom() { 
    int idxR = rand() % nums.size();
    return nums[idxR];
  }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
