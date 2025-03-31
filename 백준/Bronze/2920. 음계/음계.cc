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
   vector<int> a(8);
   vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
   vector<int> v2 = {8, 7, 6, 5, 4, 3, 2, 1};

   for (int i = 0; i < 8; i++)
   {
      cin >> a[i];
   }
   if (a == v)
   {
      cout << "ascending" << "\n";
   }
   else if (a == v2)
   {
      cout << "descending" << "\n";
   }
   else
      cout << "mixed" << '\n';
}

int main()
{
   solution();
   return 0;
}
