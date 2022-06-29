## Merge Sort Algorithm
Algorithm MERGE_SORT(A, low, high)
// Description : Sort elements of array A using Merge sort 
// Input : Array of size n, low ← 1 and  high ← n
// Output : Sorted array B

if low < high then
  mid ← floor(low + high) / 2   
  MERGE_SORT(A, low, mid)        
  MERGE_SORT (A, mid + 1, high)  
  COMBINE(A, low, mid, high)   // Merge two sorted sub lists
end

---

COMBINE(A, low, mid, high)

l1 ← mid – low + 1	// Size of 1starray
l2 ← high – mid		// Size of 2ndarray

for i ← 1 to l1 do
  LEFT [i] ← A [low + i–1]   
end

for j ← 1 to l2 do
  RIGHT [j] ← A [mid + j]
end

// Insert sentinel symbol at the end of each array
LEFT [l1 + 1] ← ∞
RIGHT [l2 +  1] ← ∞		

// Start two-way merge process
i ← 1, j ← 1
for k ← low to high do
  if LEFT [i] ≤ RIGHT [j] then
    B[k] ← LEFT [i]
    i ← i + 1	
  else
    B[k] ← RIGHT[j]
    j ← j + 1	
  end 
end
