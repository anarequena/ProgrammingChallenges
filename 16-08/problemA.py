"""
Description:
After Johnny solved problem A in LCPC2012 practice contest he decided to read
more about modulo operation so he read the following article.

Modular exponentiation is a type of exponentiation performed over a modulus. It
is particularly useful in computer science, especially in the field of cryptography.
A "modular exponentiation" calculates the remainder when a positive integer b 
(the base) raised to the e-th power (the exponent), and the total quantity is 
divided by a positive integer m, called the modulus. In symbols, this is, given 
base b, exponent e, and modulus m, the modular exponentiation c is: 
c = (b^e) mod M

For example, given b = 5, e = 3, and m = 13, the solution c is the remainder of 
dividing 5^3 by 13, which is the remainder of 125 / 13, or 8.

If b, e, and m are non-negative, and b < m, then a unique solution c exists 
with the property 0 ≤ c < m.

Input:
Input will start with T number of test cases. Followed by T test cases each 
test has three integers 0<b<109 and 0<e<1018 and 0<m<109

Output:
For each test case, output the result using the following format:
Where k is the test case number (starting at 1), a single period, a single space, then  .
"""

num = int(input())

for i in range(num):
    b,e,m = input().split(" ")
    c = pow(int(b), int(e), int(m));
    print(str(i+1) + ". " + str(c));