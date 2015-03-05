sumOfSquares x = sum (map (^2) [1..x])

squareOfSum x = (sum [1..x])^2

problem6 = (squareOfSum 100) - (sumOfSquares 100)


