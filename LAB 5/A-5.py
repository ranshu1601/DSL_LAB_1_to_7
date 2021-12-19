import sys

A = [64, 25, 12, 22, 11] 
# Traverse through all array elements

for i in range(len(A)): 
  # Find the minimum element 
    # unsorted array 
    min_idx = i 
    for j in range(i+1, len(A)): 
        if A[min_idx] > A[j]: 
            min_idx = j 
              
    # Swap the found minimum element with  
    # the first element         
    A[i], A[min_idx] = A[min_idx], A[i] 
  
# Driver code to test above 
print ("Sorted array") 
for i in range(len(A)): 
    print("%d" %A[i]),  


'''def selection_sort(array):
  n = len(array)
  for i in range(n-1):
    # Initially, assuming the first element of the unsorted part as the minimum.
    minimum = i

    for j in range(i+1, n):
      if (array[j] < array[minimum]):
        minimum = j

    # Swapping the minimum element with the first element of the unsorted part.     
        temp = array[i]
        array[i] = array[minimum]
        array[minimum] = temp
      return array'''
