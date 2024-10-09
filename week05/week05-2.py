# week05-2.py
class Solution:
    def toLowerCase(self, s: str) -> str:
      ans = ''
      for c in s:
        ans += c.lower()
    return ans  