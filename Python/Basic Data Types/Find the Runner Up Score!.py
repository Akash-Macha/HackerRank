'''if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    
    winner = max(arr)
    arr.remove(winner)

    runner_up = max(arr)
    while runner_up == winner:
        arr.remove(winner)
        runner_up = max(arr)
    print(runner_up)

'''
from collections import Counter
if __name__ == '__main__':
    n = int(input())
    arr = list(set(map(int, input().split())))
    arr.sort()
    print(arr)
    print(arr[-2])
