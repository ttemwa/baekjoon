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
   int n;
   int count = 0, ans = 0;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> str1;
      for (int j = 0; j <= str1.length(); j++)
      {
         if (str1[j] == 'O')
         {
            count++;
            ans += count;
         }
         else
            count = 0;
      }
      cout << ans << '\n';
      ans = 0;
   }
}

int main()
{
   solution();
   return 0;
}
