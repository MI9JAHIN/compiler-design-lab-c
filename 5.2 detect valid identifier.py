st = input("Enter your input:")
len=len(st)
count = 0
if st[0] == '_' or st[0] >= 'a' and st[0] <= 'z' or st[0] >= 'A' and st[0] <= 'Z':
    for i in range(1, len):
        if (st[i] == ','):
             count = 1

if (st[0] >= '0' and st[0] <= '9'):
    count=1

if(count==1):
    print("Invalid")
else:
    print("Valid")