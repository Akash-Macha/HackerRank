if __name__ == '__main__':
    l = []
    n = int(input())
    for i in range(n):
        input_ = input().split()
        check = input_[0]
        if check == 'insert':
            l.insert(int(input_[1]),int(input_[2]))
        elif check == 'print':  
            print(l)
        elif  check == 'remove':    
            l.remove(int(input_[1]))
        elif check == 'append':
            l.append(int(input_[1]))
        elif check == 'sort':
            l.sort()
        elif check == 'pop':
            l.pop()
        elif check == 'reverse':
            l.reverse()
