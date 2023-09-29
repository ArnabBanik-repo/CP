#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(){
	if(x == 0) res = 0;	
	int x; cin >> x;
	int n; cin >> n;
	int d; cin >> d;
	
	int res = 1;
	ll t = 1;
	for(int i = 0; i < n; ++ i){
		t = (1ll * res * x);
		res = t < 0 ? (d + (t % d)) % d : t % d;
	}
	
	cout << res << "\n";	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifdef ONPC
	freopen("inputf.in", "r", stdin);
	//freopen("outputf.in", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while(-- t >= 0){
		solve();
#ifdef ONPC
		cout << "----------------------\n";
#endif
	}
}
