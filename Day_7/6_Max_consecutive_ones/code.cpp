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

int findMaxConsecutiveOnes(vector<int> &nums)
{
      int n = nums.size();

      int count = 0;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (nums[i] == 1)
                  count++;
            else
            {
                  ans = max(ans, count);
                  count = 0;
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

      vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};

      int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);

      cout << "Maximum Consecutive Ones: " << maxConsecutiveOnes << endl;

      return 0;
}
