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

vector<int> twoSum(vector<int> &nums, int target)
{
      int n = nums.size();

      unordered_map<int, int> index;
      for (int i = 0; i < n; i++)
            index[nums[i]] = i;

      vector<int> ans(2);
      for (int i = 0; i < n; i++)
      {
            if (index[target - nums[i]] && index[target - nums[i]] != i)
            {
                  ans[0] = i;
                  ans[1] = index[target - nums[i]];
            }
      }
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {2, 6, 5, 8, 11};
      int target = 14;
      vector<int> solution = twoSum(nums, target);
      cout << nums[solution[0]] << " + " << nums[solution[1]] << " = " << target << endl;

      return 0;
}
