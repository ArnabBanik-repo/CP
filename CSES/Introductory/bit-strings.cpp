#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
vector<ll> f = {1, 1, 2, 6};
 
ll fact(int n){
	if(n < f.size())
		return f[n];
	for(int i = f.size() - 1; i <= n; ++ i)
		f.emplace_back(1ll * f[i] * (i + 1));	
	return f[n];
}
 
void solve(){
	int n; cin >> n;
	int res = 1;
	for(int i = 1; i <= n; ++ i)
		res = 1ll * res * 2 % MOD;
	cout << res << "\n";
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(-- t >= 0){
		solve();
#ifdef ONPC
		cout << "--------------------\n";
#endif
	}
}
