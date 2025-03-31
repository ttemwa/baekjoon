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
   int k, cnt = 0;
   vector<int> a(42, 0);
   for (int i = 0; i < 10; i++)
   {
      cin >> k;
      a[k % 42]++;
   }
   for (int i = 0; i < 42; i++)
   {
      if (a[i] > 0)
      {
         cnt++;
      }
   }
   cout << cnt << '\n';
}

int main()
{
   solution();
   return 0;
}
