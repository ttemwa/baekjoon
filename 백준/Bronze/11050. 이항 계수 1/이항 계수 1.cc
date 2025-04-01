#include <iostream>
#include <vector>
using namespace std;

#define fio()                    \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);                   \
   cout.tie(0);

int factorial(int num, int n, int k)
{
   if (num <= n - k)
      return 1;
   return num * factorial(num - 1, n, k);
}
int fac(int num)
{
   if (num <= 1)
      return 1;
   return num * fac(num - 1);
}
void solution()
{
   fio();
   int n, k;
   cin >> n >> k;
   int ans = factorial(n, n, k) / fac(k);
   cout << ans << '\n';
}

int main()
{
   solution();
   return 0;
}
