#week09-3.py 學習計畫 Math 第2題
#Leetcode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort()

        total=0
        for i in range(1,len(salary)-1):
            total += salary[i]
        return total / (len(salary)-2)