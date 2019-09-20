n_exp = int(input())

for i in range(n_exp):
    exp = input()

    if((exp == "1") or (exp == "4") or (exp == "78")):
        print("+")
    elif(exp[len(exp) - 2:] == "35"):
        print("-")
    elif(exp[:3] == "190"):
        print("?")
    else:
        print("*")