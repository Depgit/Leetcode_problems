2(a)
a, b = 'Mickey', 'Mouse'
print(a, b)

2(b)
lst = list(map(int, input("enter marks of 5 subject space seprated out of 100").split(" ")))
print('your percentage is', (sum(lst) / 500) * 100)

2(c)
for i in range(1, 11):
   print(i * 5, end=" ")
   
2(d)
print((int(input("enter celsius value")) * 1.8) + 32)

2(e)
lst = ['a', 'b', 'c','d', 'e']
print(lst[3])

2(f)
lst = ['Mouse', 'Keybord', 'microphones']
print(*lst)
