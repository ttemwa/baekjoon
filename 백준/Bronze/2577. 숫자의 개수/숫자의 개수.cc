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
   vector<int> a(3);
   vector<int> ans(10, 0);

   for (int i = 0; i < 3; i++)
   {
      cin >> a[i];
   }
   k = a[0] * a[1] * a[2];

   while (k > 0)
   {
      ans[k % 10]++;
      k /= 10;
   }
   for (int i = 0; i < ans.size(); i++)
   {
      cout << ans.at(i) << "\n";
   }
}

int main()
{
   solution();
   return 0;
}
