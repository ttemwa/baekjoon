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
   int n;
   cin >> n;

   vector<int> a(n);

   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }

   int min = a[0];
   int max = a[0];

   for (int i = 1; i < n; i++)
   {
      if (a[i] < min)
      {
         min = a[i];
      }
      if (a[i] > max)
      {
         max = a[i];
      }
   }

   cout << min << " " << max;
}

int main()
{
   solution();
   return 0;
}
