#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containduplicate(vector<int>&nums){
        unordered_set<int> s;
        for (size_t i = 0; i < nums.size(); i++){
            if (s.count(nums[i])){
            return true;

            }
             s.insert(nums[i]);
      }
           
          return false;
}
int main(){
    vector<int>nums = {1,2,3,3};
   cout << containduplicate(nums);
   return 0;
}
