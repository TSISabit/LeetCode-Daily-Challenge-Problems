#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min = *min_element(all(nums)); 
        int max = *max_element(all(nums)); 
        int max_diff = max - min; 

        return max_diff * k; 
    }
};
void solve() {
    int n, k; 
    cin >> n >> k; 
    vector<int>a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 

    Solution sol; 
    int ans = sol.maxTotalValue(a, k); 
    cout << ans << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //int t; cin >> t;
   // while (t--) {
        solve();
    //}
    return 0;
}