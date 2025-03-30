a,b=map(int,input().split())
list=[]
for i in range(1,a+1):
    for j in range(1,a+1):
        if(i*j==a):
            list.append(i)
            list.append(j)
list=set(list)
list=sorted(list)
if(len(list)<b):
    print("0")
else:
    print(list[b-1])