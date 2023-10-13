#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(){
<<<<<<< HEAD
    int n; cin >> n;
    cout << "N: " << n << "\n";
=======
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
>>>>>>> 3b134fa48a6222ec38969cb8b217da4b7a32a0f2
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifdef ONPC
    //freopen("inputf.in", "r", stdin);
    //freopen("outputf.in", "w", stdout);
#endif
<<<<<<< HEAD
    int t = 1;
    //cin >> t;
    while(-- t >= 0){
        solve();
=======
	int t = 1;
	cin >> t;
	while(-- t >= 0){
		solve();
>>>>>>> 3b134fa48a6222ec38969cb8b217da4b7a32a0f2
#ifdef ONPC
        cout << "----------------------\n";
#endif
    }
}
