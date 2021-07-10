class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        
        content = 0
        nextCookie = 0
        for j in range(0, len(s)):
            for i in range(nextCookie, len(g)):
                if s[j] >= g[i]:
                    content += 1
                    nextCookie = i+1
                    break
                    
        return content