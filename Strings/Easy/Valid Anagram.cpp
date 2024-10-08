// Given two strings s and t, return true if t is an 
// anagram of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false


// CODE->>


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for(auto x: s){
            count[x]++;
        }

        for(auto x : t){
            count[x]--;
        }

        for(auto x: count){
            if(x.second != 0){
                return false;
            }
        }

        return true;
    }
};