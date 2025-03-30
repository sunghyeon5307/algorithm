n,m=map(int,input().split())
n_list=list(map(int, input().split()))
result=0
for i in range(m):
    a,b=map(int,input().split())
    result=sum(n_list[a-1:b])
    print(result)

