class Solution:
  def backspaceCompare(self, s: str, t: str) -> bool:
    while True:
      n = s.find('#')
      if n == -1:
        break
      elif n == 0:
        s = s[1:]
      else:
        s = s[0:n-1]+s[n+1:]
    while True:
      n = t.find('#')
      if n == -1:
        break
      elif n == 0:
        t = t[1:]
      else:
        t = t[0:n-1]+t[n+1:]
    return (s == t)