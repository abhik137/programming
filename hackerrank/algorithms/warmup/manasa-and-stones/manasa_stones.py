for _ in range(int(raw_input())):
    s=set()
    n=int(raw_input())
    a=int(raw_input())
    b=int(raw_input())
    for i in range(0,n):
        s.add(i*a+ (n-i-1)*b)
    s= list(s)
    s= sorted(s)
    s= map(str,s)
    print ' '.join(s)