class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        costs.sort(key = lambda x: x[0]-x[1])
        R = sum(i[0] for i in costs[:len(costs)//2])
        R += sum(i[1] for i in costs[len(costs)//2:])
        return R