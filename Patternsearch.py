import re

p = "ajsdbatsjhdkjhodbat"
# x = "bat"

for m in re.finditer("bat",p):
    print("yes")
    print(m.start())
