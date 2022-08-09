# Is an array sorted

def isSorted(arr, ind = 1):
    if ind >= len(arr): return True
    elif arr[ind - 1] > arr[ind]: return False
    else: return isSorted(arr, ind + 1)


arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(isSorted(arr))