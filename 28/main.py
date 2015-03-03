def sum_spiral_diags(n):
  cur   = 1
  total = cur
  dist  = 2
  for i in range(1, (n / 2) + 1):
    for j in range(4): 
      cur += dist
      total += cur
    dist += 2
  return total
    
print sum_spiral_diags(1001)
