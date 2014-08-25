months={
    1:31,
    2:28,
    3:31,
    4:30,
    5:31,
    6:30,
    7:31,
    8:31,
    9:30,
    10:31,
    11:30,
    12:31
}
# months = [31,28,31,30,31,30,31,31,30,31,30,31]
# days={0:"Monday", 1:"Tuesday", 2:"Wednesday", 3:"Thursday", 4:"Friday", 5:"Saturday", 6:"Sunday"}

sundays = 0
day_count = 1   # coz 1 Jan 1901 was Tuesday
for year in xrange(1901, 2001):
    for i in months:
        no_of_days = months[i]
        # if (year % 4 or year==2000) and i==2:
        if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0) and i==2:
            no_of_days = 29
        # day_check = 0
        for x in xrange(1, no_of_days+1):
            day = day_count % 7
            # print day_count, day
            if day == 6 and x==1:
                sundays += 1
            day_count += 1
        #    day_check += 1
        # if day_check != no_of_days:
        #     print "error on "+months[i]+" "+year

print sundays                