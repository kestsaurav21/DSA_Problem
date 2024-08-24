// Problem statement
// Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.

// For example:
// Input:
// 'a' = [1, 2, 4, 5], 'n' = 5

// Output :
// 3

// Explanation: 3 is the missing value in the range 1 to 5.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 4 
// 1 2 3
// Sample Output 1:
// 4
// Explanation Of Sample Input 1:
// 4 is the missing value in the range 1 to 4.

// Constraints:
// 1 <= 'n' <= 10^6 
// 1 <= 'a'[i] <= 'n'

//CODE: 

int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int sum;

    int sumN = (N * (N + 1)) / 2;

    for(int i =0; i<N-1; i++){
        sum += a[i];
    }
    int missing = sumN - sum;
    

    return missing;

}