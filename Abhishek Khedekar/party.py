n=int(input())
d={}
for i in range(10):
    l=list(map(int,input().split()))
    temp=l[0]
    d[temp]=l[1:]
 
del l
 
count=0
for i in d:
    for j in d[i]:
        count+=1
        if j in d:
            if i in d[j]:
                d[j].remove(i)
 
print((n*(n-1))//2-count)