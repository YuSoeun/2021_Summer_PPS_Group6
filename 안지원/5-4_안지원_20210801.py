class Solution:
    def dayOfYear(self, date: str) -> int:
        Date = date.split("-")
        D = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        
        output = sum(D[:int(Date[1])-1]) + int(Date[2])
        Y = int(Date[0])
        
        if int(Date[1])>2 and (Y%4 == 0 or Y%400 == 0):
            output += 1
        return output