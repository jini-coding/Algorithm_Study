import sys

while True:
    str = sys.stdin.readline().rstrip()
    stack = []
    check = 0

    if str == ".":
        break

    for token in str:
        if token == "[" or token == "(":
            stack.append(token)

        elif token == "]":
            if len(stack) != 0 and stack[-1] == "[":
                stack.pop()
            else:
                check = 1
                break

        elif token == ")":
            if len(stack) != 0 and stack[-1] == "(":
                stack.pop()
            else:
                check = 1
                break

    if len(stack) == 0 and check == 0:
        print("yes")
    else:
        print("no")