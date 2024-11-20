# 開新的程式碼 Python
# week11-1.py 主題Hash Map, Hash Set (在資料結構與演算法 教過的 Hash雜湊)
table = {} # Python用大括號，代表字典、就是 Hash Table (Hash Map, Hash Set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341])  # 會印出9
print(table[4433997])  # 會印出4
#print(table[0])
if 0 not in table: # 如果沒有在裡面
  print("table[0]不存在")
