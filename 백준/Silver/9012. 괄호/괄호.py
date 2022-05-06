import sys

T = int(sys.stdin.readline())

for i in range(T):
    stack = []
    expr = sys.stdin.readline()
    check = 0

    for token in expr:
        if token == "(":
            stack.append(token)
        elif token == ")":
            if len(stack) != 0 and stack[-1] == "(":
                stack.pop()
            else:
                check = 1
                break

    if len(stack) == 0 and check == 0:
        print("YES")
    else:
        print("NO")
