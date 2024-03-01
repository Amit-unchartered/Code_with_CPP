/*
a and b are said to be congruent under modulo N,
if they leave same remainder when divided by N
represented as a(triple dash)b (mod N)
ex :- 13(triple_dash)41 (mod 7)

we can interchange the congruent numbers with one another, for +, - , * BUT
for divison we have modulo multiplictive inverse.

if a=b (mod n) i.e under mod n
then a-b or b-a= 0
then a-b/ b-a is divisible by n

using euclidean divison lemma we can say
a = n*k1 + r
b = n*k2 + r
their remainder will be same(as a and b are congruent)
a-b = n*(k1-k2) i.e it is divisible by n

OR a = n*k + b
OR b = n*k + a

ex:- consider the case of clock, we can say a clock is modulo 12 device. i.e
if initially clock hour hand is at 6pm then after 12hrs it will be again 6, same for after 24 hours.

ex:- 13=41 (mod 7)
13-41=-28 i.e 13 = 7*(-4) + 41
41-13=28 i.e 41 = 7*(4) + 13

Multiplication Under modulo
if a*b=c
then a(mod n)*b(mod n) congruent c(mod n)
i.e  a%n*b%n congruent c%n

13congruent3 (mod 5) and 9congruent4(mod 5)
13*9 = 117
13(mod 5)*9(mod 5) = 13%5*9%5 = 3*4 = 12
and 117%5 = 2
*/