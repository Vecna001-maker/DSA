///on the way to be specialist
///I am grinding
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
//ye multiset vala ordered_set hai , normal set ke liye kess_equal to equal kr dena
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
typedef long long int ll;
long long binpow(long long a, long long b) {
if (b == 0)
return 1;
long long res = binpow(a, b / 2);
if (b % 2)
return res * res * a;
else
return res * res;
}
 
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}