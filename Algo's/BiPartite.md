## BiPartite Algorithm
GRAPH_COLORING(G, COLOR, i)
// Description :  Solve the graph coloring problem using backtracking
// Input : Graph G with n vertices, list of colors, initial 
vertex i
// COLOR[1…n] is the array of n different colors

// Output : Colored graph with minimum color

---
if CHECK_VERTEX(i) == 1 then
if i == N then
print COLOR[1…n]
else
    j ← 1
while (j ≤ M) do
      COLOR(i + 1) ← j     
      j ← j + 1 
end
end
end
Function CHECK_VERTEX(i): 
for j ← 1 to i – 1 do
if (Adjacent(i, j)) then
if COLOR(i) == COLOR(j) 
then 
return
0 
end
end
end		
return
1
