inp = input()

names = inp.rsplit("-")

out = ""
for i in names:
    out+=i[0]

print(out)