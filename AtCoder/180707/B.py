if __name__ == "__main__":
	S = input()
	w = int(input())

	ans = ""
	for i in range(len(S)):
		if i % w == 0:
			ans += S[i]

	print(ans)