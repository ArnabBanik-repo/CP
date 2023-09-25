#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
void solve(){
	int n; cin >> n;
	for(int i = 0; i < 1 << n; ++ i){
		ll v = i ^ (i >> 1);
		bitset<32> f(v);
		string a = f.to_string();
		for(int j = 32 - n; j < 32; ++ j)
			cout << a[j];
		cout << "\n";
	}
}
 
int main(){
#ifdef ONPC
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
	int t = 1;
	//cin >> t;
	while(-- t >= 0){
		solve();
#ifdef ONPC
		cout << "----------------------\n";
#endif
	}
}
