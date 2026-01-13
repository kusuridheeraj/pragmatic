/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Problem: Two Sum                                                             ║
║ Link: https://leetcode.com/problems/two-sum/                                 ║
║ Difficulty: Easy                                                             ║
║ Pattern: Hash Table / Array                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝

📌 INTUITION:
   - Brute force is O(n²) by checking all pairs
   - HashMap allows O(1) lookup for complement (target - current)
   - Single pass solution: store visited numbers while checking for complement

🎯 APPROACH:
   1. Create HashMap to store {number: index}
   2. For each number, check if (target - number) exists in map
   3. If found, return indices; otherwise add current to map

⚡ COMPLEXITY:
   Time:  O(n) - single pass through array
   Space: O(n) - HashMap storage

🧪 EDGE CASES:
   - Negative numbers (works fine)
   - Duplicate values (handled by index checking)
   - Zero values (works fine)

💡 KEY LEARNING:
   - Hash Table is perfect for "find complement" problems
   - Trade space for time complexity improvement

═══════════════════════════════════════════════════════════════════════════════
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // {number: index}
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement exists in map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Add current number to map
            numMap[nums[i]] = i;
        }
        
        return {}; // No solution found (shouldn't happen per problem constraints)
    }
};

// Test cases
int main() {
    Solution sol;
    
    // Test case 1: Basic case
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twoSum(nums1, target1);
    cout << "Test 1: [" << result1[0] << ", " << result1[1] << "]" << endl; // Expected: [0, 1]
    
    // Test case 2: Negative numbers
    vector<int> nums2 = {-3, 4, 3, 90};
    int target2 = 0;
    vector<int> result2 = sol.twoSum(nums2, target2);
    cout << "Test 2: [" << result2[0] << ", " << result2[1] << "]" << endl; // Expected: [0, 2]
    
    // Test case 3: Duplicates
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = sol.twoSum(nums3, target3);
    cout << "Test 3: [" << result3[0] << ", " << result3[1] << "]" << endl; // Expected: [0, 1]
    
    return 0;
}
