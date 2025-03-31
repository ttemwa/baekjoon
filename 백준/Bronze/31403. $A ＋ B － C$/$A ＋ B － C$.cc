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
   int a, b, c;
   cin >> a >> b >> c;
   cout << a + b - c << '\n';
   string k = to_string(a) + to_string(b);
   cout << stoi(k) - c << '\n';
}

int main()
{
   solution();
   return 0;
}
