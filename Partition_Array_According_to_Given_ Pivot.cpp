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
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller, equal, greater;

        for (int x : nums) {
            if (x < pivot) smaller.push_back(x);
            else if (x == pivot) equal.push_back(x);
            else greater.push_back(x);
        }

        vector<int> ans;

        for (int x : smaller) ans.push_back(x);
        for (int x : equal) ans.push_back(x);
        for (int x : greater) ans.push_back(x);

        return ans;
    }
};
void solve() {
    Solution sol; 
    int n, pivot; cin >> n >> pivot; 
    vector<int>v(n); 

    for(int i = 0; i < n; i++) cin >> v[i]; 
    vector<int>ans = sol.pivotArray(v, pivot); 
    for(int i = 0; i < n; i++) cout << ans[i] << " "; 
    cout << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //int t; cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}