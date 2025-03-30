n=int(input())
m=int(input())
arr=[]
result=set()
cnt=m-n+1
for i in range(n,m+1):
    arr.append(i)
for i in range(cnt):
    for j in range(1,arr[i]+1):
        if arr[i]%j==0:60
            # arr.add(arr[i])
            # break
            print(arr[i])
