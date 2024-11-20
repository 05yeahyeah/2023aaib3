# week11-3.py LeetCode 2461.
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans,total = 0,0
        counter = Counter()
        for i in range(k):
            num = nums[i]
            counter[num] += 1
            total += num
        if len(counter)==k:
            ans = max(ans,total) #有幾個不同的數字
        for i in range(k, len(nums)):
            left,right = nums[i-k], nums[i]
            counter[left] -= 1
            counter[right] += 1
            total = total - left + right
            if counter[left]==0:del counter [left]
            if len(counter)==k: ans = max(ans,total)
        return ans
