#include <iostream>
#include <vector>
using namespace std;

#define fio()                    \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);                   \
   cout.tie(0);

void solution()
{
   fio();
   string str1;
   int t, h, w, n, ans1, ans2;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      cin >> h >> w >> n;
      ans1 = (n % h == 0) ? h : n % h;
      ans2 = (n % h == 0) ? (n / h) : (n / h + 1);
      cout << ans1;
      if (ans2 < 10)
         cout << '0';
      cout << ans2 << '\n';
   }
}

int main()
{
   solution();
   return 0;
}
