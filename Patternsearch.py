import re

p = "aaaaaaaaaa"
# x = "bat"

for m in re.finditer("aa",p):
    # print("yes")
    print(m.start(),"\n")
