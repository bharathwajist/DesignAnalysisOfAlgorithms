## Hamiltonian Circuit
Dercription : Solving Hamiltonian circuit using backtracking approach
Input : Undirected, Connected graph G = <V, E> and Initial vertex i
Output : Hamiltonian Circuit

if Feasible(i) then :
  return;
else if (i == n-1) then:
  write(V[0,1,...,n-1)
else:
  j <- 2
while(j <= n) do:
  V[i] <- j
  Hamiltonian(i+1)
  j <- j-1
 end
 end
 end
 
Function Feasible(i)
  flag(i)
  
for(j <- 1 to i -1) do:
  if(Adj(Vi Vj)) then:
    flag <- 0
  end
end

if(Adj(Vi, Vj)) then:
  flag <- 1
end
return flag
