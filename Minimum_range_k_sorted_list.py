def getMinRange(a):
    minR = 0
    maxR = 9999999999
    acc = []
    for i in range(len(a)):
        for j in a[i]:
            acc.append((j, i))
    acc.sort()
    l = 0
    r = -1
    um = {}
    cnt = 0
    while True:
        if(r >= len(acc)-1):
            break
        while (cnt < len(a) and r < len(acc)-1):
            r += 1
            x = acc[r]
            # print(x)
            if (x[1] not in um or um[x[1]] == 0):
                cnt += 1
                um[x[1]] = 1
            else:
                um[x[1]] += 1
        while (cnt >= len(a)):
            if((maxR - minR) > (acc[r][0]-acc[l][0])):
                maxR = acc[r][0]
                minR = acc[l][0]
            x = acc[l]
            l += 1
            if(um[x[1]] == 1):
                cnt -= 1
            um[x[1]] -= 1
    return [minR, maxR]


a = [[4, 10, 15, 24, 26], [0, 9, 12, 20], [5, 18, 22, 30]]
print(getMinRange(a))
