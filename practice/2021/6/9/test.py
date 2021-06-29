n, m = map(int, input().split())
a = [int(j) for j in input().split()]
x = set([int(j) for j in input().split()])
y = set([int(j) for j in input().split()])
res = 0
for i in a:
	if(i in x): res = res + 1
	elif(i in y): res = res - 1
print(res)