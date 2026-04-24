#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
     unordered_map<string,vector<string>>mp;
     for (string word: strs){
        string key = word;
        sort(key.begin(), key.end());
        mp[key].push_back(word);
     }
     for(auto it: mp){
        cout << "[";
        for(string word : it.second){
            cout << word << " ";
        }
        cout << "]";
     }
}
    
