## N Queen Problem
N_QUEEN (k, n)
// Description : To find the solution of n x n queen problem using backtracking
// Input : 
n: Number of queen
k: Number of the queen being processed currently, initially set to 1.

// Output : n x 1 Solution tuple 


for i <- 1 to n do:
  if(place(k,i)) then:
    x[k] <- i
    if(k == n) then:
      write(W[1.n])
    else:
      N_QUEEN(k+1, n)
    end
  end
end

PLACE(k, i)
// k is the number of queen being processed
// i is the number of columns

for j ← 1 to k – 1 do
  if x[j] == i OR ((abs(x[j]) - i) == abs(j - k)) then
    return false
  end
end
return true
