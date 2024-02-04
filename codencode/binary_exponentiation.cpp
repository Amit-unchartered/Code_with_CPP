//calculate a^n in O(logn)

//TC --> O(N)
int power(int base, int n){
    int res=1;

    for(int i=0; i < n; i++) {
        res=res*base;
    }
    return res;
}

//optimized approach
//TC --> O(logn) with base 2
int power(int base, int n){
    int res=1;

    while(n){
        if(n%2){
            n--;
            res = res*base;
        }else{
            base=base*base; n=n/2;
        }
    }
}

//Modular Exponentiation --> (a^n)%p
//TC --> O(logn)
int power(int a, int n, int p){
    int res=1;

    while(n){
        if(n%2){
            res=(res*a)%p; n--;
        }else{
            a*=a%p; n/=2; 
        }
    }
}