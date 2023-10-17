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

int longestConsecutive(vector<int> &nums)
{
      int n = nums.size();
      if (!n)
            return 0;
      else if (n == 1)
            return 1;
      sort(nums.begin(), nums.end());

      int ans = 0;
      int count = 1;

      for (int i = 0; i < n - 1; i++)
      {
            if (nums[i] == nums[i + 1])
                  continue;
            if (nums[i] + 1 == nums[i + 1])
            {
                  count++;
            }
            else
            {
                  ans = max(ans, count);
                  count = 1;
            }
      }
      ans = max(ans, count);

      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {100, 200, 1, 2, 3, 4};
      int ans = longestConsecutive(nums);
      cout << "The longest consecutive sequence is " << ans << "\n";

      return 0;
}
