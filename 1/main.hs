sumMultiplesBelowX :: Integer -> Integer -> Integer
sumMultiplesBelowX n x = sum ([n,2*n..x-1])

problem1 = (sumMultiplesBelowX 3 1000) + (sumMultiplesBelowX 5 1000)
