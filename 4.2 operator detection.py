st=input("Enter as you want : ")
list=[]
list=st.split()
print(list)

keyword=[]
Objects=[]
operetor=[]

for i in list:
  if i=='int' or i=='float' or i=='double' or i=='char':
    keyword.append(i)

  elif i>='A' and i<='Z' or i>='a' and i<='z':
    Objects.append(i)

  elif i=='!' or i=='@' or i=='#' or i=='-' or i=='+' or i=='*' or i=='/' or i=='%' or i=='=':
    operetor.append(i)

if keyword:
  print("Keyword", keyword)

if Objects:
  print("Objects",Objects)

if operetor:
  print("Operetor",operetor)

else:
  print("None")