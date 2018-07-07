n,m,d = list(map(int, input().split()))

def descend(top_n, depth):
	if depth == 1:
		if top_n >= 1+d:
			return 1
		elif top_n <= n-d:
			return 1
		else:
			return 2

	ans = 0
	for i in range(n):
		ans += descend(i+1, depth-1)
	return ans

if __name__ == "__main__":
	ans = 0
	for i in range(n):
		ans += descend(i+1, m)
	print(float(ans / m))
