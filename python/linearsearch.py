# Linear search with recursion

def search(arr, target, ind = 0):
    if ind == len(arr): return -1
    elif arr[ind] == target: return ind
    else: return search(arr, target, ind + 1)

def searchLast(arr, target, ind):
    if ind == -1: return -1
    elif arr[ind] == target: return ind
    else: return searchLast(arr, target, ind - 1)

print(search([1, 2, 3, 4, 5], 0))
print(searchLast([1, 2, 3, 1, 3, 5, 8], 1, 6))