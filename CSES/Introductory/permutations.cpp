#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main() {
    int n; cin >> n;
    if(n == 1) {
        cout << "1\n";
        return 0;
    }
    vector<int> odd;
    vector<int> even;
    for(int i = 0; i < n; ++ i){
        if((i + 1) & 1) odd.emplace_back(i + 1);
        else even.emplace_back(i + 1);
    }
    if(abs(odd[0] - even[n/2 - 1]) == 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    for(int i : even) cout << i << " ";
    for(int i : odd) cout << i << " ";
    cout << "\n";
}
