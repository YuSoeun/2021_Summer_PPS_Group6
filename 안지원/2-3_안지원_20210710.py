class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1:
            return (strs[0])
        
        strs.sort(key=len)
        result = ""
        
        for i in range(len(strs[0])):
            find = strs[0][i]
            for j in range(1,len(strs)):
                if find == strs[j][i]:
                    if j == len(strs)-1:
                        result += find
                    continue;
                return result
        return result