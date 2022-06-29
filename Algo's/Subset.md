 SUB_SET_PROBLEM(i, sum, W, remSum)
// Description : Solve sub of subset problem using backtracking
// Input : 	
W: Number for which subset is to be computed
i: Item index
sum : Sum of integers selected so far
remSum : Size of remaining problem i.e. (W – sum)

// Output : Solution tuple X

if

 FEASIBLE_SUB_SET(i) == 1 
then


  
if

(sum == W) 
then


    print X[1…i]
  
end


else


  X[i + 1] ← 1		
  SUB_SET_PROBLEM(i + 1, sum + w[i] + 1, W, remSum – w[i] + 1 )
  X[i + 1] ← 0	// Exclude the ith item
  SUB_SET_PROBLEM(i + 1, sum, W, remSum – w[i] + 1 )
end



function

FEASIBLE_SUB_SET(i)
  
if

(sum + remSum ≥ W) AND (sum == W) or (sum + w[i] + 1 ≤ W) 
then


    
return

0
  
end


return

1
