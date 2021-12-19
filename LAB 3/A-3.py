#first taking input from user 
#Input Code
row_num = int(input("Input number of rows: "))
col_num = int(input("Input number of columns: "))

#storing the first matrix as A
A = [[0 for col in range(col_num)] for row in range(row_num)]
for row in range(row_num):
    for col in range(col_num):
        item = int(input("Enter the elements in first matrix: "))
        A[row][col]= item

print("The first matrix is...")
print(A)

#storing the first matrix as B
B = [[0 for col in range(col_num)] for row in range(row_num)]
for row in range(row_num):
    for col in range(col_num):
        item = int(input("Enter the elements in second matrix: "))
        B[row][col]= item

print("The second matrix is...")
print(B)

#addition of two matrix 
def add_matrix(A,B):
    result = [[A[i][j] + B[i][j]  for j in range(len(A[0]))] for i in range(len(A))]

    print("The Addition of Two Matrices...")
    for r in result:  
        print(r)
 
#subtraction of two matrices
def sub_matrix(A,B):
    result = [[A[i][j] - B[i][j]  for j in range(len(A[0]))] for i in range(len(A))]

    print("The Subtraction of Two Matrices...")
    for r in result:
        print(r)

#transpose of matrix
def transpose(A):
    result = [[0 for col in range(col_num)] for row in range(row_num)]
    # iterate through rows  
    for i in range(len(A)):  
       for j in range(len(A[0])):  
           result[j][i] = A[i][j]  
  
    print("Transposed Matrix is ...")
    for r in result:  
        print(r)  

#Multiplication of two matrices
def Mul_matrix(A,B):
    result = [[0 for col in range(col_num)] for row in range(row_num)]
    # iterate through rows of X  
    for i in range(len(A)):  
        for j in range(len(B[0])):  
           for k in range(len(B)):  
               result[i][j] += A[i][k] * B[k][j]  

    print("Matrix Multiplication is ...")
    for r in result:  
        print(r)  



#Instruction Code
print("\n Program for Matrix Operations")
while(True):
    print("\n 1. Addition of Two Matrices")
    print("\n 2. Subtraction of Two Matrices")
    print("\n 3. Multiplication of Two Matrices")
    print("\n 4. Transpose of Matrix")
    print("\n 5. Exit ")
    print("\n Enter your choice: ")
    choice = int(input())
    if(choice == 1):
        add_matrix(A,B)
    elif(choice == 2):
        sub_matrix(A,B)
    elif(choice == 3):
        Mul_matrix(A,B)
    elif(choice == 4):
        transpose(A)
    else:
        print("\n Exiting ......")
        print("\n Have a Good Day ")
        break
