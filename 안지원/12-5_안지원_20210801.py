class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        R = []
        for i in nums1:
            B = False
            for j in nums2:
                if i == j:
                    B = True
                if i < j and B:
                    R.append(j)
                    break;
                elif j == nums2[-1]:
                    R.append(-1)
                    break
        return R
                