#include <bits/stdc++.h>
using namespace std;
long long int power(long long int x, long long  int y, long long int p)
{
    long long int res = 1;      
    x = x % p;  
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
bool miillerTest(long long int d, long long int n)
{
    long long int a = 2 + rand() % (n - 4);
    long long int x = power(a, d, n);
    if (x == 1  || x == n-1)
       return true;
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
    return false;
}
bool isPrime(long long int n, int k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    long long  d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    for (long long int i = 0; i < k; i++)
         if (miillerTest(d, n) == false)
              return false;
 
    return true;
}
int main()
{
    int k = 4; 
 
    cout << "All primes smaller than 100: \n";
    for (int n = 1; n < 100; n++)
       if (isPrime(n, k))
          cout << n << " ";
 
    return 0;
}