# Bubble Sort


import random


def sort(arr):
    completed = False
    step = 1  # The last index till which we need to interate decreases every step

    while not completed:
        completed = True
        for i in range(0, len(arr) - step):
            if arr[i] > arr[i + 1]:
                completed = False
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
    
    return


a = list(range(int(1000)))
random.shuffle(a)
sort(a)
print(a)