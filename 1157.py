w=list(input().upper())
cnt=[]
for i in w:
    cnt.append(w.count(i))
m=max(cnt)
print(cnt[m])