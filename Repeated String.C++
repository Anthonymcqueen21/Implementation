#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
typedef long long 11;
int main() {
   string s; 
   cin >> s;
   ll n;
   11 count=0;
   cin >> n;
   for(11 i=0;i<s.size();i++) {
       if(s[i] == 'a')
          count++;
   }
   11 ans =0 ;
   ans = n/s.size();
   ans *=count;
   if((n%s.size())) {
      11 r = n&s.size();
      for(11 i=0;i<r;i++) {
         if(s[i] == 'a') ans++;
      }
   }
  count<<ans<<endl;
  return 0;
}
   
