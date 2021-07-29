class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        R = [str(i+1) for i in range(n)]
        for i in range(n):
            if (i+1) % 3 == 0 and (i+1) % 5 == 0:
                R[i] = "FizzBuzz"
            elif (i+1) % 3 == 0:
                R[i] = "Fizz"
            elif (i+1) % 5 == 0:
                R[i] = "Buzz"
        return R