if __name__ == "__main__":
	l = list(map(int, input().split()))
	if l[0] + l[1] == 15:
		print("+")
	elif l[0] * l[1] == 15:
		print("*")
	else:
		print("x")
