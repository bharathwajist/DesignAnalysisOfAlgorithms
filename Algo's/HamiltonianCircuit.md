## Hamiltonian Circuit
Dercription : Solving Hamiltonian circuit using backtracking approach
Input : Undirected, Connected graph G = <V, E> and Initial vertex i
Output : Hamiltonian Circuit

if Feasible(i) then :</br>
  return;<br>
else if (i == n-1) then:</br>
  write(V[0,1,...,n-1)</br>
else:</br>
  j <- 2</br>
while(j <= n) do:</br>
  V[i] <- j</br>
  Hamiltonian(i+1)</br>
  j <- j-1></br>
 end</br>
 end</br>
 end</br>
 </br>
Function Feasible(i)</br>
  flag(i)</br>
 </br>
for(j <- 1 to i -1) do:</br>
  if(Adj(Vi Vj)) then:</br>
    flag <- 0</br>
  end</br>
end</br>
</br>
if(Adj(Vi, Vj)) then:</br>
  flag <- 1</br>
end</br>
</br>
return flag</br>
