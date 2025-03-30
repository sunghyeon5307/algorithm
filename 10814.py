n=int(input())
list=[]
for _ in range(n):
    i,j=input().split()
    i=int(i)
    list.append((i,j))
list.sort(key=lambda x:x[0])
for i in list:
    print(i[0],i[1])
