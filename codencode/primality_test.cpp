//TC --> O(n)
bool isprime(int n){
    if(n == 1){
        return false;
    }

    for(int i=2; i <= n; i++) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

//better approach --> all divisors of the numbers occur in pairs 
//claim: for a divisor pair(a,b) one of the lies below sqrt(n) and other lies above sqrt(n)
//proof: There would be 3 cases
//1. both a and b are below sqrt(n) --> a*b < n(contradiction)
//2. both a and b are above sqrt(n) --> a*b > n(contradiction)
//3. one is below and other is above

//we can run a loop till sqrt(n)
//TC --> O(sqrt(n))
bool isprime(int n){
    if(n == 1){
        return false;
    }

    for(int i=2; i*i <= n; i++) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}