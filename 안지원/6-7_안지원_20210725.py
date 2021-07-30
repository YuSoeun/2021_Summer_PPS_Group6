# class Solution:
#     def removeDuplicates(self, s: str) -> str:
#         i = 0
#         while True:
#             if len(s) <= 1:
#                 return s
#             elif i == len(s)-1:
#                 return s
#             elif s[i] == s[i+1]:
#                 if i+2 > len(s)-1:
#                     s = s[0:i]
#                 else:
#                     s = s[0:i]+s[i+2:]
#                 i = 0
#             else:
#                 i += 1

class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        for i in s:
            if len(stack) > 0 and stack[-1] == i:
                stack.pop()
            else:
                stack.append(i)
        return "".join(stack)