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
   int k = 0;
   vector<int> a(5);

   for (int i = 0; i < 5; i++)
   {
      cin >> a[i];
      k += a[i] * a[i];
   }
   k = k % 10;
   cout << k;
}

int main()
{
   solution();
   return 0;
}
