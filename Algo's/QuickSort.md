## Quick Sort Algorithm

Algorithm QUICKSORT (A, low, high)
// Description : Sort array A using Quicksort
// Input : Unsorted array A of size n, low = 0, high = n - 1
// Output : Sorted array A

if low ≤ high then
  q ← PARTITION (a, low, high)	
  QUICKSORT (A, low, q – 1)	
  QUICKSORT (A, q + 1, high)	
end

---

PARTITION (A, low, high)
x ← A[high]	// x is pivot element i.e. last element of list
i ← low – 1	 
for j ← low to high – 1 do
  if A[j] ≤ x then
    i ← i + 1
    swap (A[i], A[j])
  end
end
swap (A[i + 1], A[high])
return (i + 1)	// Correct index of pivot after sorting
