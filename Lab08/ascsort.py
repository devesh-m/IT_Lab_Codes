sen = input("enter a sentence: ") + " "
Wl = []
w = ""

for i in sen:
    if i==" ":
        Wl.append(w)
        w = ""
        continue
    w = w + i

av = []
for i in Wl:
    sum=0
    for j in i:
        sum += ord(j)
    av.append(sum)

dict = {}
for i in range(len(Wl)):
    dict[av[i]] = Wl[i]

for i in range(len(av)-1):
    for j in range(len(av)-i-1):
        if av[j] > av[j+1]:
            temp = av[j]
            av[j] = av[j+1]
            av[j+1] = temp

for i in av:
    print(dict[i] + " ", end="")