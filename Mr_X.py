# import sys
# sys.stdin = open('input.txt', 'r')
# sys.stdout = open('output.txt', 'w')

test = int(input())
for i in range(test):
    s = input()
    s1 = s.replace('X', '1')
    s1 = s1.replace('x', '0')
    a1 = eval(s1)
    s2 = s.replace('X', '0')
    s2 = s2.replace('x', '1')
    a2 = eval(s2)
    if(a1 == a2):
        print("Case #", i + 1, ": ", 0, sep='')
    else:
        print("Case #", i + 1, ": ", 1, sep='')
