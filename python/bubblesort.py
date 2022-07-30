# Bubble Sort


def sort(arr):
    completed = False

    while not completed:
        completed = True
        for i in range(0, len(arr) - 1):
            if arr[i] > arr[i + 1]:
                completed = False
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
    
    return
