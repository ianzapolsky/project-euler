largestPrimeFactor :: Integer -> Integer
largestPrimeFactor x = maximum [i | i <- (getFactors x), isPrime i]

isPrime :: Integer -> Bool
isPrime x = x > 1 && length (getFactors x) == 0 

getFactors :: Integer -> [Integer]
getFactors x = [i | i <- 2:[3,5..(floor (sqrt (fromIntegral x)))], x `mod` i == 0]
