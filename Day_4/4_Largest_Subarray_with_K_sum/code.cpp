#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
#define forn(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define endl "\n"
#define MOD 1000000007
#define MAX 100005
#define int ll

int longestSubarray(vector<int> &nums)
{
      int n = nums.size();
      vector<int> prefixSum(n);
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += nums[i];
            prefixSum[i] = sum;
            cout << prefixSum[i] << " ";
      }
      cout << endl;
      unordered_map<int, int> map;
      int lastZero = -1;
      for (int i = n - 1; i >= 0; i--)
      {
            map[prefixSum[i]] = i;
            if (lastZero == -1 && prefixSum[i] == 0)
                  lastZero = i;
      }
      int ans = -1;
      for (int i = 0; i < n; i++)
      {
            ans = max(ans, abs(map[prefixSum[i]] - i));
      }
      ans = max(lastZero + 1, ans);
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {1, 3, -5, 6, -2};
      int ans = longestSubarray(nums);
      cout << "Length of the longest subarray having sum 0 is " << ans << "\n";

      return 0;
}
