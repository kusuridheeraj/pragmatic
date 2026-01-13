# 🚀 Quick Start Guide

## 📱 Step 1: Install GitHub Mobile App

1. Download **GitHub Mobile** from App Store / Play Store
2. Sign in with your GitHub account
3. Navigate to your `pragmatic` repository
4. ⭐ Star the repository for quick access

**Why?** This lets you review problems during leisure time - on the bus, before bed, or during breaks.

---

## 🔧 Step 2: Install LeetHub v2 (Auto-Sync)

### Installation
1. Open Chrome/Edge browser
2. Go to Chrome Web Store
3. Search for **"LeetHub v2"**
4. Click "Add to Chrome"
5. Pin the extension to toolbar

### Configuration
1. Click the LeetHub v2 icon
2. Click "Authenticate with GitHub"
3. Grant repository access
4. Select repository: `kusuridheeraj/pragmatic`
5. Enable auto-sync

**Magic:** Now every time you solve a problem on LeetCode and hit "Submit" → "Accepted", it automatically:
- Creates a folder in the appropriate category
- Saves your code
- Commits to GitHub
- You do ZERO manual work! 🎉

---

## 💻 Step 3: Local Development Setup

### Clone the Repository
```bash
cd C:\PlayStation
git clone https://github.com/kusuridheeraj/pragmatic.git
cd pragmatic
```

### Open in VS Code
```bash
code .
```

---

## 📝 Step 4: Daily Workflow

### When Solving on LeetCode
1. Solve the problem
2. Submit and get "Accepted"
3. LeetHub v2 automatically syncs to GitHub
4. Later: Add detailed notes to the auto-generated README

### When Solving Locally
1. Copy template from `TEMPLATES/` folder
2. Solve the problem
3. Save in appropriate category folder (e.g., `01_Arrays_Hashing/ProblemName/`)
4. Update `PROGRESS.md`
5. Commit and push

```bash
git add .
git commit -m "Solved: [Problem Name]"
git push origin main
```

---

## 📊 Step 5: Update Progress Tracker

After solving each problem, update `PROGRESS.md`:

1. Add new row to the problems table
2. Set confidence level (⭐ to ⭐⭐⭐⭐⭐)
3. Calculate next review date based on confidence:
   - ⭐ = Review in 1 day
   - ⭐⭐ = Review in 3 days
   - ⭐⭐⭐ = Review in 1 week
   - ⭐⭐⭐⭐ = Review in 2 weeks
   - ⭐⭐⭐⭐⭐ = Review in 1 month
4. Update category breakdown
5. Commit changes

---

## 📱 Step 6: Leisure Review (Mobile)

### On Your Phone
1. Open GitHub Mobile App
2. Navigate to `pragmatic` repo
3. Browse by category (e.g., `03_Sliding_Window/`)
4. Open any problem folder
5. Read the **header section** of the code file (Intuition + Approach)
6. Try to recall the solution mentally
7. Then scroll down to see your implementation

**Pro Tip:** Read only the Intuition section first, close your eyes, and try to reconstruct the approach mentally. This is active recall - the most effective learning technique.

---

## 🎯 Step 7: Spaced Repetition

### Check Daily
Open `PROGRESS.md` and look at "Review Schedule" section:
- **Due Today:** Problems you need to review today
- **Due This Week:** Upcoming reviews

### Review Process
1. Open the problem folder
2. Read only the problem statement
3. Try to solve it again (on paper or in your head)
4. Check your previous solution
5. Update confidence level if needed
6. Reschedule next review

---

## 🏆 Pro Tips

### 1. **Use Templates**
Always start with templates from `TEMPLATES/` folder. They have the perfect header format for mobile reading.

### 2. **Write Good Headers**
The header in your code file is what you'll read on mobile. Make it count:
- Clear intuition
- Step-by-step approach
- Key learnings

### 3. **Be Honest with Confidence**
Don't mark ⭐⭐⭐⭐⭐ just to feel good. If you struggled, mark ⭐ or ⭐⭐ and review sooner.

### 4. **Categorize Correctly**
Put problems in the right category. This helps when you want to master a specific pattern.

### 5. **Track Failed Attempts**
If you can't solve a problem, save it in `99_Revisit/` folder. Come back to it after learning the pattern.

---

## 🔥 Folder Structure Reference

```
pragmatic/
├── 01_Arrays_Hashing/          # Two Sum, Group Anagrams, etc.
├── 02_Two_Pointers/            # Valid Palindrome, Container With Most Water
├── 03_Sliding_Window/          # Best Time to Buy Stock, Longest Substring
├── 04_Stack/                   # Valid Parentheses, Min Stack
├── 05_Binary_Search/           # Binary Search, Search Rotated Array
├── 06_Linked_List/             # Reverse Linked List, Merge Lists
├── 07_Trees/                   # Invert Tree, Max Depth, etc.
├── 08_Tries/                   # Implement Trie, Word Search II
├── 09_Heap_Priority_Queue/     # Kth Largest, Merge K Lists
├── 10_Backtracking/            # Subsets, Permutations, N-Queens
├── 11_Graphs/                  # Number of Islands, Clone Graph
├── 12_Dynamic_Programming/     # Climbing Stairs, Coin Change
├── 13_Greedy/                  # Jump Game, Gas Station
├── 14_Intervals/               # Merge Intervals, Meeting Rooms
├── 15_Math_Geometry/           # Rotate Image, Spiral Matrix
├── 16_Bit_Manipulation/        # Single Number, Counting Bits
├── 17_SQL/                     # SQL queries and window functions
├── 18_System_Design/           # Design patterns and architectures
├── 19_Ad_Hoc/                  # Ad-hoc problems (simulation, game theory, etc.)
├── 20_Day_Wise_Practice/       # Daily practice organized by date
├── 21_CP_Handbook/             # Competitive Programming Handbook
├── 22_Halim_Book/              # Steven Halim's CP book problems
└── 99_Revisit/                 # Problems to revisit later
```

---

## ❓ FAQ

**Q: Do I need to fill out everything in the template?**  
A: No, but fill out at least: Intuition, Approach, Complexity, and Key Learning. These are crucial for revision.

**Q: What if LeetHub v2 doesn't sync?**  
A: Manually copy your code to the appropriate folder and commit. Not a big deal.

**Q: Should I solve problems in order?**  
A: No, solve based on patterns. Master one category at a time (e.g., all Arrays & Hashing problems first).

**Q: How many problems per day?**  
A: Quality > Quantity. 1-2 problems with deep understanding > 5 problems rushed.

---

## 🎓 Remember

> "I don't just solve problems. I understand patterns, document learnings, and build long-term muscle memory."

This system compounds. In 6 months, you'll have:
- 100+ well-documented problems
- Deep pattern recognition
- Interview-ready portfolio
- Personal reference textbook

**Now go solve your first problem and update `PROGRESS.md`!** 🚀
