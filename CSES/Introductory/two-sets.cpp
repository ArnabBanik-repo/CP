#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n; cin >> n;
    ll s = 1ll * n * (n + 1) / 2;
    if (s & 1) {
        cout << "NO\n";
		exit(0);
    }
 
    ll t = s / 2;
	vector<int> a;
    for(int i = n; i >= 1 && t > 0; -- i){
        if(i > t) continue;
        t -= i;
		a.emplace_back(i);
    }
    if(t == 0) {
		reverse(a.begin(), a.end());
		int l = a.size();
        cout << "YES\n";
		cout << l << "\n";
		for(int i = 0; i < l; ++ i)
			cout << a[i] << " ";
		cout << "\n";
		int k = 0;
		cout << (n - l) << "\n";
		for(int i = 1; i <= n; ++ i){
			if(i == a[k]){
				++ k;
				continue;
			}
			cout << i << " ";
		}
		cout << "\n";
		exit(0);
    }
    cout << "NO\n";
}
