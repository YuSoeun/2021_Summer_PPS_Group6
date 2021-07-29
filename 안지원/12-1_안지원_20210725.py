class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        stack = []
        i = 0
        while True:
            if len(nums) == 0:
                return stack
            elif len(stack)%2 == nums[i]%2:
                stack.append(nums[i])
                del nums[i]
                i = 0
            else:
                i += 1