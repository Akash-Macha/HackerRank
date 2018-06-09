// https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
// Check the editorial Link : https://www.hackerrank.com/challenges/30-running-time-and-complexity/editorial
// It has some great explination with code

import math

def check_primality(n):
    if n == 2 or n == 3:
        return "Prime"
    if n%2==0 or n%3 == 0:
        return "Not prime"
    
    check = False
    
    for i in range(5, math.ceil(math.sqrt(n))+1, 2):
        if n%i==0:
            check = True
            break
    if check == True:
        return "Not prime"
    else:
        return "Prime"

    
T = int(input())
while(T != 0):
    num = int(input())
    if num == 1:
        print('Not prime')
    else:
        print(check_primality(num))
    T = T - 1
