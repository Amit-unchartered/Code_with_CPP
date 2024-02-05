/*
also for subtraction, but not for divison
(N1+N2)%mod = (N1%mod + N2%mod)%mod;
(N1*N2)%mod = ((N1%mod)*(N2%mod))%mod;

Euclid Divison Lemma:-
for positive integers A and B, there exist integer q and r such that
A = B*q+r where 0<=r<B

Proof:-
N1 = mod*q1 + r1
N2 = mod*q2 + r2

(N1+N2)%mod = (mod*q1+r1+mod*q2+r2)%mod
            =(o+r1+0+r1)%mod
            =(r1+r2)%mod
            =(N1%mod + N2%mod)%mod

Euclid Algorithm can be used to calculate GCD(HCF) of two numbers say a and b

gcd(a,b) = {a, if b=0}
           {gcd(b, a%b), otherwise}

CODE:- TC --> log(max(a,b))
int gcd(int a, int b){
    if(b ==0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

Making some Observations
Let GCD of A and B = g
Observation 1: GCD(A,0) = GCD(0,A) = A
Observation 2: GCD(A,B) = GCD(B,A)
Observation #: GCD(A,B) = GCD(A-B,B) = GCD(A,B-A)

A = g*X, B = g*Y
A-B = g(X-Y) they both are still divisible by g, so GCD will remain unaffected
B-A = g(Y-X)

gcd(44,12) = gcd(44-12, 12) = gcd(32,12)
gcd(32,12) = gcd(20,12)
gcd(20,12) = gcd(8,12)
gcd(8,12) = gcd(12,8) swap positions
gcd(12,8) = gcd(4,8)
gcd(4,8) = gcd(8,4) swap positions
gcd(8,4) = gcd(4,4)
gcd(4,4) = gcd(0,4)
*/