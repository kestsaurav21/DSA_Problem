// Problem statement
// You are given a sorted array 'arr' of positive integers of size 'n'.

// It contains each number exactly twice except for one number, which occurs exactly once.

// Find the number that occurs exactly once.



// Example :
// Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

// Output: 2

// Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.





//Code --> Brute Force

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n = arr.size();

	for (int i =0; i<n; i++){
		int num = arr[i];
		int count = 0;

		for(int j = 0; j<n; j++){
			if(arr[j] == num){
				count++;
			}
		}

		if(count == 1){
			return num;
		}

	}

	return -1;

}

// Better - Map 



int getSingleElement(vector<int> &arr) {

    //size of the array:
    int n = arr.size();

    // Declare the hashmap.
    // And hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    //Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }

    //This line will never execute
    //if the array contains a single element.
    return -1;
}




// Optimal Approach -->  Using XOR


#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n = arr.size();
	int xorr = 0;
	for (int i =0; i<n; i++){
		
		xorr = xorr ^ arr[i];

	}

	return xorr;

}

