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
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size(); 
        int rightSum = 0; 
        for(int i = 0; i < n; i++){
            rightSum += nums[i]; 
        }
        int leftSum = 0; 
        vector<int>diff(n); 

        for(int i = 0; i < n; i++){
            rightSum -= nums[i]; 
            diff[i] = abs(leftSum - rightSum); 
            leftSum += nums[i]; 
        }
        return diff; 
    }
};

void solve() {
    int n; cin >> n; 
    vector<int>nums(n); 
    for(int i = 0; i < n; i++) cin >> nums[i]; 
    Solution sol; 
    vector<int>ans = sol.leftRightDifference(nums); 
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " "; 
    cout << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}