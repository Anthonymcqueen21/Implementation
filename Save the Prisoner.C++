#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, m, s;
int main() {
   int T;
   scanf("%d",&T);
   while(T--){
      scanf("%d%d%d",&n,&m,&s);
      --s;
      --m;
      m %= n;
      s = (s + m)%n;
      printf("%d\n",s+1);
   }
   return 0;
}
