KUSKAL_MST(G)
// Description : Find minimum spanning tree of graph G of n vertices
// Input : Weighted undirected graph G
// Output : Minimum spanning tree of G

MST ← Φ
for

each v ∈ V 
do


  MAKE-SET(v)
end


for each

(u, v) ∈ E ordered by weight in increasing order 
do


  
if

FIND-SET(u) ≠ FIND-SET(v) 
then


    MST ← MST ∪ (u, v)
    UNION(u, v)
  
end


end



Function

MAKE-SET(x)
if

x is not already present 
then


  x.parent ← x		
  x.rank ← 0
end



Function FIND(x)
if

x.parent ≠ x 
then


  x.parent ← FIND(x.parent)
end


return

x.parent

Function

UNION(x, y)
xRoot ← FIND(x)
yRoot ← FIND(y)
if

xRoot == yRoot 
then

		
	
return


end


if

xRoot.rank < yRoot.rank 
then


  xRoot.parent ← yRoot
else if

yRoot.rank < xRoot.rank 
then


  yRoot.parent ← xRoot
else


  xRoot.parent ← yRoot
  yRoot.rank ← yRoot.rank + 1
end
