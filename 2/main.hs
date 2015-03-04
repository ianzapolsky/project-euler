fibs = 1 : 2 : zipWith (+) fibs (tail fibs)

problem2 = sum [x | x <- take 50 fibs, x `mod` 2 == 0 && x < 4000000]
