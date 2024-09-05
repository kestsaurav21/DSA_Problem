// Problem statement
// Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.

// Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

// Example:
// Input: ‘n’ = 5 ‘m’ = 3
// ‘a’ = [1, 2, 3, 4, 6]
// ‘b’ = [2, 3, 5]

// Output: [1, 2, 3, 4, 5, 6]

// Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
// Distinct elements in ‘a’ are: [1, 4, 6]
// Distinct elements in ‘b’ are: [5]
// Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 5 3
// 1 2 3 4 6
// 2 3 5
// Sample Output 1 :
// 1 2 3 4 5 6

// Constraints :
// 1 <= 'n', 'm' <= 10^5
// -10^9 <= 'a'[i], 'b'[i] <= 10^9


// CODE----> 

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here

    set<int> result(a.begin(), a.end());

    for(int i =0; i<b.size(); i++){
        result.insert(b[i]);

    }

    return vector<int> (result.begin(), result.end());

}