stringin = input("enter a string: ")
string = stringin.lower()
acount=ecount=icount=ocount=ucount=0

for i in range(len(string)):
    if string[i]=='a':
        acount+=1
    elif string[i]=='e':
        ecount+=1
    elif string[i]=='i':
        icount+=1
    elif string[i]=='o':
        ocount+=1
    elif string[i]=='u':
        ucount+=1
    else:
        continue

count = acount + ecount + icount + ocount + ucount
print(f'''the number of vowels in {string} is {count}
the number of a's in {stringin} is {acount}
the number of e's in {stringin} is {ecount}
the number of i's in {stringin} is {icount}
the number of o's in {stringin} is {ocount}
the number of u's in {stringin} is {ucount}''')

'''Output
enter a string: beautiful
the number of vowels in beautiful is 5
the number of a's in beautiful is 1
the number of e's in beautiful is 1
the number of i's in beautiful is 1
the number of o's in beautiful is 0
the number of u's in beautiful is 2
'''