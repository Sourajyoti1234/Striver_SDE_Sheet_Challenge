#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    if(n==0)return 1;
    int p=modularExponentiation(x,n/2,m);
    if(n%2==1)
        return (((1LL*p*p)%m)*x%m)%m;
    else
        return (1LL*p*p)%m;
}
