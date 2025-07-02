from datetime import date

f = open("List.py", "rt")
data = f.read()
print(data)
print(type(date))
f.close()