sen = input("enter a sentence: ") + " "
temp = ""
rev = ""

for i in sen:
    if i==" ":
        rev = rev + temp + " "
        temp = ""
        continue
    temp = i + temp

print(rev)