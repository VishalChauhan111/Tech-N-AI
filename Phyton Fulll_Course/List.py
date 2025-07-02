#List in python.....

# marks =[23,.33,34,25,24,22,]
# Student = ["raj", 93, "C-section"]
# print(Student[0],Student[2],len(Student))

#Tuples in python.....

# tup = (12,34,55,23,55,"Tuple")
# print(tup,len(tup))

#Ceck a list is a pallindrom or not #Use list.copy()Method.

list1 = ["M","a","a","M"]
copy_list1 = list1.copy()
copy_list1.reverse()
if copy_list1== list1 :
    print("pallindrom")
else :
    print("Not pallindrom")
