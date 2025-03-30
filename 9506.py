while True:
    num=set()
    cnt=0
    n=int(input())
    if(n==-1):
        break
    for i in range(1,n+1):
        if n%i==0:
            num.add(i)
    num.discard(n)
    for i in num:
        cnt=cnt+i
    if cnt==n:
        print(str(n)+" = "+" + ".join(map(str,num)))
    if cnt!=n:
        print(str(n)+" is NOT perfect.")