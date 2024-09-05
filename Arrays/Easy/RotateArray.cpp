// Problem statement
// Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

// Example:
// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 8
// 7 5 2 11 2 43 1 1
// 2
// Sample Output 1:
// 2 11 2 43 1 1 7 5
// Explanation of Sample Input 1:
// Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
// Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
// Sample Input 2:
// 4
// 5 6 7 8
// 3
// Sample Output 2:
// 8 5 6 7
// Explanation of Sample Input 2:
// Rotate 1 steps to the left: 6 7 8 5
// Rotate 2 steps to the left: 7 8 5 6
// Rotate 2 steps to the left: 8 5 6 7
// Expected Time Complexity:
// O(n), where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.
// Constraints:
// 1 <= 'n' <= 10^3
// 1 <= 'arr'[i] <= 10^9
// 1 <= 'k' < 'n'


//CODE --> LEFT Rotate

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.


    vector<int> temp;
    for(int i=0; i<k; i++){
        temp.push_back(arr[i]);
    }
    int n = arr.size();
    for(int i = k; i<n; i++){
        arr[i-k] = arr[i];
    }

    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i - (n - k)];
    }

    return arr;

}


// Code 2--> Optimal solution

// LEFT Rotate



class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

        
    }

};



// RIGHT ROTATE

void rotate(vector<int>& nums, int k) {
        
        k = k%nums.size();
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.begin(),nums.end());

        
    }
