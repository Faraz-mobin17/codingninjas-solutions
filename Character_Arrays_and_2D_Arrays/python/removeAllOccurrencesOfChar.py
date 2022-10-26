from sys import stdin

def removeAllOccurrencesOfChar(string,ch):
	n = len(string)
	ans = ""
	
	for i in range(n):
		if string[i] != ch:
			ans += string[i]
	
	return ans

#main
string = stdin.readline().strip()
ch = stdin.readline().strip()[0]
ans = removeAllOccurrencesOfChar(string,n)
print(ans)