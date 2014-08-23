dic={1:"one",
    2:"two",
    3: "three",
    4: "four",
    5: "five",
    6: "six",
    7: "seven",
    8: "eight",
    9: "nine",
    10: "ten",
    11: "eleven",
    12: "twelve",
    13: "thirteen",
    14: "fourteen",
    15: "fifteen",
    16: "sixteen",
    17: "seventeen",
    18: "eighteen",
    19: "nineteen",
    20: "twenty", 30: "thirty", 40: "forty", 50: "fifty", 60: "sixty", 70: "seventy", 80: "eighty", 90: "ninety",
    100: "hundred"
    }
len_arr=[len(dic[i]) for i in dic]

sum_19 = sum(len_arr[:19])
sum_20 = 10*len(dic[20]) + sum(len_arr[:9])
sum_30 = 10*len(dic[30]) + sum(len_arr[:9])
sum_40 = 10*len(dic[40]) + sum(len_arr[:9])
sum_50 = 10*len(dic[50]) + sum(len_arr[:9])
sum_60 = 10*len(dic[60]) + sum(len_arr[:9])
sum_70 = 10*len(dic[70]) + sum(len_arr[:9])
sum_80 = 10*len(dic[80]) + sum(len_arr[:9])
sum_90 = 10*len(dic[90]) + sum(len_arr[:9])

sum_x = sum_19 + sum_20 + sum_30 + sum_40 + sum_50 + sum_60 + sum_70 + sum_80 + sum_90
sum_huns = 100*sum(len_arr[:9])+9*(100*(len(dic[100]))+99*len("and")+sum_x)
thousand = len("one")+len("thousand")
total = sum_x+sum_huns+thousand

# for i in xrange(1, 1001):
#     while i<=20:
#         #print len(dic[i])
#         sum += len(dic[i])
#         print dic[i]
#         i+=1
#         print i

#     while i>20 and i<30:
#         sum += len(dic[20])
#     break
print total