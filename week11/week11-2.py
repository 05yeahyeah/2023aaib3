# week11-2.py LeetCode 2461. Maximum Sum of .....
nums = [1,1,1,2,3] #��J���

from collections import Counter
counter = Counter() #����p�g�B�k��j�g
for num in nums:
  counter[num] += 1

print(counter) # �L�X�έp�����G
