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

int maxSubArray(vector<int> &nums)
{
      int n = nums.size();

      int maxTillNow = INT_MIN;
      int maxEnd = 0;

      for (auto c : nums)
      {
            maxEnd += c;
            if (maxTillNow < maxEnd)
                  maxTillNow = maxEnd;
            if (maxEnd < 0)
                  maxEnd = 0;
      }
      return maxTillNow;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
      int maxSum = maxSubArray(nums);
      cout << "The maximum subarray sum is: " << maxSum << endl;

      return 0;
}