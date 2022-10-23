# Problem : Power
def power(x,n):
	if n == 0:
		return 1
	smallAns = power(x,n-1)
	return smallAns;

# Main
from sys import setrecursionlimit
setrecursionlimit(1100)
x,n = list(int(i) for i in input().strip().split(' '))
print(power(x,n))