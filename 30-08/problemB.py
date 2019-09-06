"""
Once upon a time, Hamza was hungry, only leftover food could be found in the fridge, so he wanted to order online.

Hamza currently has x JDs, and the sandwich he wants to buy costs y JDs, can Hamza order food online or he has to face his biggest enemies, leftover food?

Input
The first and only line in the input contains exactly 2 space separated integers x,y(1≤x,y≤10), the amount of money he has, and the cost of the sandwich.

Output
If Hamza can buy the sandwich print "1"(on a single line without quotes), otherwise print "0"(on a single line without quotes).
"""

have, want = input().split(" ")

if int(want) <= int(have):
    print("1")
else:
    print("0")