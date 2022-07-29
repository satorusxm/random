# Binary Search


def iterative(arr, target):
    """
    Using iteration
    """

    start = 0
    end = len(arr) - 1

    while (start <= end):
        middle = (start + end) // 2
        elem = arr[middle]
        
        if (elem == target): return middle
        elif (elem > target): end = middle - 1
        else: start = middle + 1
    
    return -1

def tail_recursive(arr, target, start=0, end=None):
    """
    Using tail recursion
    """

    if end is None: end = len(arr) - 1
    elif start > end: return -1

    middle = (start + end) // 2
    elem = arr[middle]

    if elem == target: return middle
    if elem > target: return tail_recursive(arr, target, start, middle-1)
    else: return tail_recursive(arr, target, middle+1, end)
