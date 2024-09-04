# Find the maximum number in any of three variables.
start\
input N1,N2,N3\
if N1>N2 and N1>N3\
then print "First Number is Greater"\
else if N2>N1 and N2>N3\
then print "Second Number is Greater"\
else if N3>N1 and N3>N2\
then print "Third Number is Greater"\
else print "Invalid numbers"\
end

# Take three variables as input and add them without using the + operator
start\
input N1,N2,N3\
add N1,N2,N3\
print sum\
end

# Create a small calculator which only does ‘+’ or ‘-‘ Operations.
start\
input N1,N2,N3\
set sum to N1+N2+N3\
set difference to N1-N2-N3\
input type of operaton\
if type of operaton = sum\
then print sum\
else print difference\
end
