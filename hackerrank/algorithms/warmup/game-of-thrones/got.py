#!/usr/bin/env python

def test_palindrome():
    # lis = 0*[26]
    # j = 1
    # for a in alph:
    #     dic[a] = j
    #     j += 1
        
    alph = "abcdefghijklmnopqrstuvwxyz"
    dic = {}
    found = False
    # Write the code to find the required palindrome and then assign the variable 'found' a value of True or False

    for a in alph:
        dic[a] = 0

    for s in string:
        dic[s] += 1

    # print dic
    # lis = [dic[i] for i in dic]
    count = 0

    # for i in xrange(len(lis)):
    #     if lis[i] % 2 != 0:
    #         count += 1
    #     else:
    #         pass

    for i in dic:
        if dic[i] % 2 != 0:
            count += 1
        else:
            pass
        print i
    # print count
    if count <= 1:
        found = True

    if not found:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    string = raw_input()
    test_palindrome()