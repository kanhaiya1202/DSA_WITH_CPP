#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;  // store frequency of each number
        
        // Step 1: Count frequencies
        for (int num : arr) {
            freq[num]++;
        }
        
        unordered_set<int> seen;  // to check if any frequency repeats
        
        // Step 2: Check uniqueness
        for (auto& entry : freq) {
            if (seen.count(entry.second)) {
                return false;  // duplicate frequency found
            }
            seen.insert(entry.second);
        }
        
        return true;  // all frequencies are unique
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {1,2,2,1,1,3};
    cout << (sol.uniqueOccurrences(arr1) ? "true" : "false") << endl; // Output: true

    vector<int> arr2 = {1,2};
    cout << (sol.uniqueOccurrences(arr2) ? "true" : "false") << endl; // Output: false

    vector<int> arr3 = {-3,0,1,-3,1,1,1,-3,10,0};
    cout << (sol.uniqueOccurrences(arr3) ? "true" : "false") << endl; // Output: true

    return 0;
}
