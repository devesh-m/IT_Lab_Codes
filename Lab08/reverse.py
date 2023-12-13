sen = input("enter a sentence: ")
spl = sen.split()
rev = ["" for i in range(len(spl))]
nes = ""

for i in range(len(spl)):
    rev[i] = spl[i][::-1]
print(rev)

for j in range(len(rev)):
    nes = nes + " " + rev[j]

nes = nes.strip()
print(nes)