m = int(input("enter number of rows in first matrix: "))
n = int(input("enter number of columns in first matrix: "))
r = int(input("enter number of columns in first matrix: "))
m1 = [[0 for _ in range(n)]]*m
m2 = [[0 for _ in range(r)]]*n
product = [[0 for _ in range(r)]]*m

print(m1)
print(m2)
print(product)

print("for Matrix M1: ")
for i in range(m):
    for j in range(n):
        m1[i][j] = int(input(f"Enter element a[{i}][{j}]"))
        print(m1[i][j])
        
print("for Matrix M2: ")
for i in range(n):
    for j in range(r):
        m2[i][j] = int(input(f"Enter element a[{i}][{j}] "))
        print(m2[i][j])

for i in range(m):
    for j in range(r):
        for k in range(n):
            product[i][j] += m1[i][k]*m2[k][j]
            #print(product[i][j])

print(product)

'''print("product matrix elements=")
for i in range(m):
    for j in range(r):
        print(f"a[{i}][{j}] = {product[i][j]}")'''
