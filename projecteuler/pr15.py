# ref: http://www.robertdickau.com/lattices.html | http://www.robertdickau.com/manhattan.html
# http://math.stackexchange.com/questions/321192/lattice-paths-and-catalan-numbers
# Ans= (2n!)/(n!^2)

# TODO:devise a recursive/programming based soln. to this
def find_routes(x, y):
    routes = 0
    if y>0:
        routes += find_routes(x, y-1)
    elif x>0:
        routes += find_routes(x-1, y)
    elif x==0 and y==0:
        routes += 2
    return routes

start = time.time()
nr=find_routes(2,2)
print nr
end = time.time()
print("%.5f s" % (end - start))
