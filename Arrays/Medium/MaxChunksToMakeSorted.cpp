// You are given an integer array arr of length n that represents a permutation of the integers in the range [0, n - 1].

// We split arr into some number of chunks (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.

// Return the largest number of chunks we can make to sort the array.

// Example 1:

// Input: arr = [4,3,2,1,0]
// Output: 1
// Explanation:
// Splitting into two or more chunks will not return the required result.
// For example, splitting into [4, 3], [2, 1, 0] will result in [3, 4, 0, 1, 2], which isn't sorted.
// Example 2:

// Input: arr = [1,0,2,3,4]
// Output: 4
// Explanation:
// We can split into two chunks, such as [1, 0], [2, 3, 4].
// However, splitting into [1, 0], [2], [3], [4] is the highest number of chunks possible.


// problem : https://leetcode.com/problems/max-chunks-to-make-sorted/description/

// CODE: --->

// Solution 1:

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       int countChunks =0;
       int n = arr.size();
       int preMax[n];
       preMax[0] = arr[0];
       for(int i=1; i<n; i++){
        preMax[i] = max(preMax[i-1], arr[i]);
       }
       for(int i =0; i<n; i++){
            if(i == preMax[i]){
                countChunks++;
            }
       } 
       return countChunks;
    }
};





// Solution 2:


class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       int maxChunks = 0;
       int ans = 0;
       int n = arr.size();
       for(int i =0; i<n; i++){
            if(maxChunks<arr[i]){
                maxChunks=arr[i];
            }
            if(maxChunks == i){
                ans++;
            }
       } 
       return ans;
    }
};
