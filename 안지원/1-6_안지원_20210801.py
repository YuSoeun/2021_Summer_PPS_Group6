class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output = [[] for i in range(numRows)]
        
        output[0].insert(0, 1)
        for i in range(1, numRows):
            output[i].insert(0, 1)
            for j in range(1, i):
                output[i].insert(j, output[i-1][j-1]+output[i-1][j])
            output[i].insert(i, 1)
        return output