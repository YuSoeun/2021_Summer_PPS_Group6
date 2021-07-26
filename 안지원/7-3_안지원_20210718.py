class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = set(nums)
        max_n = 0
        max_c = 0
        for i in n:
            c = nums.count(i)
            if max_c < c:
                max_c = c
                max_n = i
        if max_c >= len(nums)/2:
            return max_n
        else:
            return 0