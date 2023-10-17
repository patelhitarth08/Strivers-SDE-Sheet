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

int subarraysWithXorK(vector<int> &nums, int k)
{
      int n = nums.size();
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int xr = 0;
            for (int j = i; j < n; j++)
            {
                  xr ^= nums[j];
                  if (xr == k)
                        ans++;
            }
      }
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> a = {4, 2, 2, 6, 4};
      int k = 6;
      int ans = subarraysWithXorK(a, k);
      cout << "The number of subarrays with XOR \"k = " << k << "\" is: "
           << ans << "\n";

      return 0;
}
