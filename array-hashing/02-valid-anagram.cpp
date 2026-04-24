#include <iostream>
#include <string>
using namespace std;
bool isANAGRAM(string s, string t){
            if (s.size() != t.size()){
                return false;
            }
        int freq[26] = {0};
        for (size_t i = 0; i < s.size(); i++){
             freq[s[i] - 'a']++;   
        }                      
        for (size_t i = 0; i < t.size(); i++){
            freq[t[i] - 'a']--;
            if (freq[t[i] - 'a'] < 0 ){
                return false;
            }
        }
        return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
cout << isANAGRAM (s ,t);
}
