 BK_KNAPSACK(M, W, V, fw, fp, X)
// Description : Solve knapsack problem using backtracking
// Input :
M: Knapsack capacity
W(1...n): Set of weight of the items
V(1...n): Set of profits associated with items
Fw: Final knapsack weight
Fp: Final earned profit
X(1...n): Solution vector
N: Total number of items

// Output : Solution tuple X, earned profit fp

// Initialization
cw ← 0		// Current weight
cp ← 0		// Current profit
fp ← – 1 
k ← 1		// Index of item being processed
