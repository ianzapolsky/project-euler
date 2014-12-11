# project euler problem 22
# by Ian Zapolsky

def get_names(filename):
  names = []
  with open(filename, 'r') as f:
    for name in f.read().split(','):
      names.append(name.replace('"', '').replace('\n', ''))
  return names

def get_alphscore(name):
  score = 0
  for letter in name.lower():
    if letter != None:
      score += ord(letter) - ord('a') + 1
  return score

def get_namescore(names):
  score = 0
  for i, name in enumerate(sorted(names)):
    score += (i + 1) * get_alphscore(name)
  return score


if __name__ == '__main__':
  names = get_names('names.txt')
  print get_namescore(names)
