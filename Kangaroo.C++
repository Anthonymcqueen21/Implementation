#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 > v1 >> x2 >> v2;
    if(v1 == x4) {
        if(x1 == x2)
           puts("YES");
        else
           puts("N0");
    }else{
        int t = (x2 - x1)/(v1 - v2);
        if(t*(v1 - v2) == (x2 - x1) && t >= 0)
           puts("YES");
        else
           puts("NO");
    }
    return 0;
}
   
