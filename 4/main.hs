isPalindrome x = show x == reverse (show x)

get2DigitProducts = [ i * j | i <- [10..99], j <- [10..99]]

getPals2Digit = [i | i <- get2DigitProducts, isPalindrome i]

get3DigitProducts = [ i * j | i <- [100..999], j <- [100..999]]

getPals3Digit = [i | i <- get3DigitProducts, isPalindrome i]

problem4 = maximum getPals3Digit

