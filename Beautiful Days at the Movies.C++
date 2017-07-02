#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
long long v, k, s, t, diff;
int ans;
long long revs(long long v) {
    long long res = 0;
    while(v > 0) {
       res = res*10 + (v%10);
       v /= 10;
    }
    return res;
}
int main() {
    ans = 0;
    scanf("%11d%11d%11d",&s,&t,&k);
    for(v = s; v <= t; ++ v) {
        dif = abs(v - revs(v));
        ans += (dif&k == 0);
    }
    printf("%d\n",ans);
    return 0;
}
