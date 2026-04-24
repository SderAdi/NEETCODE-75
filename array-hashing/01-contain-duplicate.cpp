#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containduplicate(vector<int> &nums){
    unordered_set<int> s;
    for (int x : nums) {
        if (s.count(x)) {
            return true;
        }
        s.insert(x);
    }
    return false;
}
int main()
{
    vector<int> nums = {1, 2, 3, 3};
    cout << containduplicate(nums);
    return 0;
}