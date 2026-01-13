# Two Sum

## 📋 Problem Details

- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/two-sum/
- **Difficulty:** Easy
- **Date Solved:** 13-01-2026
- **Time Taken:** 15 minutes

## 🎯 Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## 💡 Intuition

The brute force approach would be to check every pair of numbers, but that's O(n²). 

**Key Observations:**
- For each number `x`, we need to find if `target - x` exists in the array
- HashMap allows O(1) lookup time
- We can solve this in a single pass by storing numbers we've seen

## 🔍 Approach

Use a HashMap to store numbers we've already visited along with their indices.

**Algorithm Steps:**
1. Create an empty HashMap to store {number: index}
2. For each number in the array:
   - Calculate complement = target - current number
   - Check if complement exists in HashMap
   - If yes, return [complement_index, current_index]
   - If no, add current number and index to HashMap
3. Return result

## ⚡ Complexity Analysis

- **Time Complexity:** O(n)
  - Explanation: Single pass through the array, HashMap operations are O(1)
  
- **Space Complexity:** O(n)
  - Explanation: HashMap can store up to n elements in worst case

## 🧪 Edge Cases Considered

- [x] Empty input - Not possible per constraints
- [x] Single element - Not possible per constraints
- [x] Duplicate elements - Handled by storing indices
- [x] Negative numbers - Works fine
- [x] Large inputs - Efficient O(n) solution
- [x] Other: Zero values, same number appearing twice

## 🎓 Key Learnings

**What I learned from this problem:**
- HashMap is perfect for "find complement" type problems
- Trading space for time complexity is often worth it
- Single-pass solutions are more elegant than two-pass

**Pattern/Technique used:**
- Hash Table for O(1) lookups
- Complement pattern (target - current)

**Similar problems to practice:**
- Three Sum (LeetCode 15)
- Four Sum (LeetCode 18)
- Two Sum II - Input Array Is Sorted (LeetCode 167)

## 🔄 Optimization Ideas

**Current approach:**
- O(n) time, O(n) space - optimal for unsorted array

**Possible improvements:**
- If array was sorted, could use two-pointer technique with O(1) space
- But sorting would take O(n log n) time

## 📝 Notes for Revision

**When reviewing this problem, focus on:**
- Why HashMap is the right choice here
- How the complement pattern works
- Edge case: what if same element needs to be used twice?

**Common mistakes to avoid:**
- Using the same element twice (check index before returning)
- Forgetting to handle negative numbers
- Not considering the order of indices in result

---

**Confidence Level:** ⭐⭐⭐⭐⭐  
**Next Review Date:** 13-02-2026
