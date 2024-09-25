class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s+s
        s2 = s2[1:len(s2)-1]
        #print(s2)
        if s in s2: return True
        else: return False
